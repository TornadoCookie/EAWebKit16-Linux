# EASTL Maintenance

## Introduction

The purpose of this document is to provide some necessary background for anybody who might do work on EASTL. Writing generic templated systems like EASTL can be surprisingly tricky. There are numerous details of the C++ language that you need to understand which don't usually come into play during the day-to-day C++ coding that many people do. It is easy to make a change to some function that seems proper and works for your test case but either violates the design expectations or simply breaks under other circumstances.

It may be useful to start with an example. Here we provide an implementation of the count algorithm which is seems simple enough. Except it is wrong and while it will compile in some cases it won't compile in others:

```cpp
int count(InputIterator first, InputIterator last, const T& value)
{
     int result = 0;

     for(; first < last; ++first){
         if(*first == value)
             ++result;
     }

     return result;
 }
 ```

The problem is with the comparison 'first < last'. The count algorithm takes an InputIterator and operator< is not guaranteed to exist for any given InputIterator (and indeed while operator< exists for vector::iterator, it doesn't exist for list::iterator). The comparison in the above algorithm must instead be implemented as 'first != last'. If we were working with a RandomAccessIterator then 'first < last' would be valid.

In the following sections we cover various topics of interest regarding the development and maintentance of EASTL. Unfortunately, this document can't cover every aspect of EASTL maintenance issues, but at least it should give you a sense of the kinds of issues.

## C++ Language Standard

First and foremost, you need to be familiar with the C++ standard. In particular, the sections of the standard related to containers, algorithms, and iterators are of prime significance. We'll talk about some of this in more detail below. Similarly, a strong understanding of the basic data types is required. What is the difference between ptrdiff_t and intptr_t; unsigned int and size_t; char and signed char?

In addition to the C++ language standard, you'll want to be familiar with the C++ Defect Report. This is a continuously updated document which lists flaws in the original C++ language specification and the current thinking as the resolutions of those flaws. You will notice various references to the Defect Report in EASTL source code.

Additionally, you will want to be familiar with the C++ Technical Report 1 (as of this writing there is only one). This document is the evolving addendum to the C++ standard based on both the Defect Report and based on desired additions to the C++ language and standard library.

Additionally, you will probably want to have some familiarity with Boost. It also helps to keep an eye on comp.std.c++ Usenet discussions. However, watch out for what people say on Usenet. They tend to defend GCC, Unix, std STL, and C++ to a sometimes unreasonable degree. Many discussions ignore performance implications and concentrate only on correctness and sometimes academic correctness above usability.

## Language Use

Macros are (almost) not allowed in EASTL. A prime directive of EASTL is to be easier to read by users and most of the time macros are an impedence to this. So we avoid macros at all costs, even if it ends up making our development and maintenance more difficult. That being said, you will notice that the EASTL config.h file uses macros to control various options. This is an exception to the rule; when we talk about not using macros, we mean with the EASTL implementation itself.

EASTL assumes a compliant and intelligent C++ compiler, and thus all language facilities are usable. However, we nevertheless choose to stay away from some language functionality. The primary language features we avoid are:

*   RTTI (run-time-type-identification) (this is deemed too costly)
*   Template export (few compilers support this)
*   Exception specifications (most compilers ignore them)

Use of per-platform or per-compiler code should be avoided when possible but where there is a significant advantage to be gained it can and indeed should be used. An example of this is the GCC __builtin_expect feature, which allows the user to give the compiler a hint about whether an expression is true or false. This allows for the generation of code that executes faster due to more intelligent branch prediction.

## Prime Directives

The implementation of EASTL is guided foremost by the following directives which are listed in order of importance.

1.  Efficiency (speed and memory usage)
2.  Correctness (doesn't have bugs)
3.  Portability (works on all required platforms with minimal specialized code)
4.  Readability (code is legible and comments are present and useful)

Note that unlike commercial STL implementations which must put correctness above all, we put a higher value on efficiency. As a result, some functionality may have some usage limitation that is not present in other similar systems but which allows for more efficient operation, especially on the platforms of significance to us.

Portability is significant, but not critical. Yes, EASTL must compile and run on all platforms that we will ship games for. But we don't take that to mean under all compilers that could be conceivably used for such platforms. For example, Microsoft VC6 can be used to compile Windows programs, but VC6's C++ support is too weak for EASTL and so you simply cannot use EASTL under VC6.

Readability is something that EASTL achieves better than many other templated libraries, particularly Microsoft STL and STLPort. We make every attempt to make EASTL code clean and sensible. Sometimes our need to provide optimizations (particularly related to type_traits and iterator types) results in less simple code, but efficiency happens to be our prime directive and so it overrides all other considerations.

## Coding Conventions

Here we provide a list of coding conventions to follow when maintaining or adding to EASTL, starting with the three language use items from above:

*   No RTTI use.
*   No use of exception specifications (e.g. appending the 'throw' declarator to a function).
*   No use of exception handling itself except where explicitly required by the implementation (e.g. vector::at).
*   Exception use needs to savvy to EASTL_EXCEPTIONS_ENABLED.
*   No use of macros (outside of config.h). Macros make things more difficult for the user.
*   No use of static or global variables.
*   No use of global new, delete, malloc, or free. All memory must be user-specifyable via an Allocator parameter (default-specified or explicitly specified).
*   Containers use protected member data and functions as opposed to private. This is because doing so allows subclasses to extend the container without the creation of intermediary functions. Recall from our [prime directives](#Prime_Directives) above that performance and simplicity overrule all.
*   No use of multithreading primitives. 
*   No use of the export keyword.
*   We don't have a rule about C-style casts vs. C++ static_cast<>, etc. We would always use static_cast except that debuggers can't evaluate them and so in practice they can get in the way of debugging and tracing. However, if the cast is one that users don't tend to need to view in a debugger, C++ casts are preferred.
*   No external library dependencies whatsoever, including standard STL. EASTL is dependent on only EABase and the C++ compiler. 
*   All code must be const-correct. This isn't just for readability -- compilation can fail unless const-ness is used correctly everywhere. 
*   Algorithms do not refer to containers; they refer only to iterators.
*   Algorithms in general do not allocate memory. If such a situation arises, there should be a version of the algorithm which allows the user to provide the allocator.
*   No inferior implementations. No facility should be added to EASTL unless it is of professional quality.
*   The maintainer should emulate the EASTL style of code layout, regardless of the maintainer's personal preferences. When in Rome, do as the Romans do. EASTL uses 4 spaces for indents, which is how the large majority of code within EA is written.
*   No major changes should be done without consulting a peer group.

## Compiler Issues

Historically, templates are the feature of C++ that has given C++ compilers the most fits. We are still working with compilers that don't completely and properly support templates. Luckily, most compilers are now good enough to handle what EASTL requires. Nevertheless, there are precautions we must take.

It turns out that the biggest problem in writing portable EASTL code is that VC++ allows you to make illegal statements which are not allowed by other compilers. For example, VC++ will allow you to neglect using the typename keyword in template references, whereas GCC (especially 3.4+) requires it.

In order to feel comfortable that your EASTL code is C++ correct and is portable, you must do at least these two things:

*   Test under at least VS2005, GCC 3.4+, GCC 4.4+, EDG, and clang.
*   Test all functions that you write, as compilers will often skip the compilation of a template function if it isn't used.

The two biggest issues to watch out for are 'typename' and a concept called "dependent names". In both cases VC++ will accept non-conforming syntax whereas most other compilers will not. Whenever you reference a templated type (and not a templated value) in a template, you need to prefix it by 'typename'. Whenever your class function refers to a base class member (data or function), you need to refer to it by "this->", "base_type::", or by placing a "using" statement in your class to declare that you will be referencing the given base class member.

## Iterator Issues

The most important thing to understand about iterators is the concept of iterator types and their designated properties. In particular, we need to understand the difference between InputIterator, ForwardIterator, BidirectionalIterator, RandomAccessIterator, and OutputIterator. These differences dictate both how we implement our algorithms and how we implement our optimizations. Please read the C++ standard for a reasonably well-implemented description of these iterator types.

Here's an example from EASTL/algorithm.h which demonstrates how we use iterator types to optimize the reverse algorithm based on the kind of iterator passed to it:

```cpp
template <class BidirectionalIterator>
inline void reverse_impl(BidirectionalIterator first, BidirectionalIterator last, bidirectional_iterator_tag)
{
    for(; (first != last) && (first != --last); ++first) // We are not allowed to use operator <, <=, >, >= with
        iter_swap(first, last);                          // a generic (bidirectional or otherwise) iterator.
}


template <typename RandomAccessIterator>
inline void reverse_impl(RandomAccessIterator first, RandomAccessIterator last, random_access_iterator_tag)
{
    for(; first < --last; ++first) // With a random access iterator, we can use operator < to more efficiently implement
        iter_swap(first, last);    // this algorithm. A generic iterator doesn't necessarily have an operator < defined.
}


template <class BidirectionalIterator>
inline void reverse(BidirectionalIterator first, BidirectionalIterator last)
{
    typedef typename iterator_traits<BidirectionalIterator>::iterator_category IC;
    reverse_impl(first, last, IC());
}
```

## Exception Handling

You will notice that EASTL uses try/catch in some places (particularly in containers) and uses the EASTL_EXCEPTIONS_ENABLED define. For starters, any EASTL code that uses try/catch should always be wrapped within #if EASTL_EXCEPTIONS_ENABLED (note: #if, not #ifdef).

This is simple enough, but what you may be wondering is how it is that EASTL decides to use try/catch for some sections of code and not for others. EASTL follows the C++ standard library conventions with respect to exception handling, and you will see similar exception handling in standard STL. The code that you need to wrap in try/catch is code that can throw a C++ exception (not to be confused with CPU exception) and needs to have something unwound (or fixed) as a result. The important thing is that the container be in a valid state after encountering such exceptions. In general the kinds of things that require such try/catch are:

*   Memory allocation failures (which throw exceptions)
*   Constructor exceptions

Take a look at the cases in EASTL where try/catch is used and see what it is doing.

## Type Traits

EASTL provides a facility called type_traits which is very similar to the type_traits being proposed by the C++ TR1 (see above). type_traits are useful because they tell you about properties of types at compile time. This allows you to do things such as assert that a data type is scalar or that a data type is const. The way we put them to use in EASTL is to take advantage of them to implement different pathways for functions based on types. For example, we can copy a contiguous array of scalars much faster via memcpy than we can via a for loop, though we could not safely employ the for loop for a non-trivial C++ class.

As mentioned in the GeneralOptimizations section below, EASTL should take advantage of type_traits information to the extent possible to achive maximum effiiciency.

## General Optimizations

One of the primary goals of EASTL is to achieve the highest possible efficiency. In cases where EASTL functionality overlaps standard C++ STL functionality, standard STL implementations provided by compiler vendors are a benchmark upon which EASTL strives to beat. Indeed EASTL is more efficient than all other current STL implementations (with some exception in the case of some Metrowerks STL facilities). Here we list some of the things to look for when considering optimization of EASTL code These items can be considered general optimization suggestions for any code, but this particular list applies to EASTL:

*   Take advantage of type_traits to the extent possible (e.g. to use memcpy to move data instead of a for loop when possible).
*   Take advantage of iterator types to the extent possible.
*   Take advantage of the compiler's expectation that if statements are expected to evaluate as true and for loop conditions are expected to evaluate as false.
*   Make inline-friendly code. This often means avoiding temporaries to the extent possible.
*   Minimize branching (i.e. minimize 'if' statements). Where branching is used, make it so that 'if' statements execute as true.
*   Use EASTL_LIKELY/EASTL_UNLIKELY to give branch hints to the compiler when you are confident it will be beneficial.
*   Use restricted pointers (EABase's EA_RESTRICT or various compiler-specific versions of __restrict).
*   Compare unsigned values to < max instead of comparing signed values to >= 0 && < max.
*   Employ power of 2 integer math instead of math with any kind of integer.
*   Use template specialization where possible to implement improved functionality.
*   Avoid function calls when the call does something trivial. This improves debug build speed (which matters) and sometimes release build speed as well, though sometimes makes the code intent less clear. A comment next to the code saying what call it is replacing makes the intent clear without sacrificing performance.

## Unit Tests

Writing robust templated containers and algorithms is difficult or impossible without a heavy unit test suite in place. EASTL has a pretty extensive set of unit tests for all containers and algorithms. While the successful automated unit testing of shipping application programs may be a difficult thing to pull off, unit testing of libraries such as this is of huge importance and cannot be understated.

*   When making a new unit test, start by copying one of the existing unit tests and follow its conventions.
*   Test containers of both scalars and classes.
*   Test algorithms on both container iterators (e.g. vector.begin()) and pointer iterators (e.g. int*).
*   Make sure that algorithm or container member functions which take iterators work with the type of iterator they claim to (InputIterator, ForwardIterator, BidirectionalIterator, RandomAccessIterator). 
*   Test for const-correctness. If a user is allowed to modify something that is supposed to be const, silent errors can go undetected.
*   Make sure that unit tests cover all functions and all pathways of the tested code. This means that in writing the unit test you need to look at the source code to understand all the pathways.
*   Consider using a random number generator (one is provided in the test library) to do 'monkey' testing whereby unexpected input is given to a module being tested. When doing so, make sure you seed the generator in a way that problems can be reproduced.
*   While we avoid macros in EASTL user code, macros to assist in unit tests aren't considered a problem. However, consider that a number of macros could be replaced by templated functions and thus be easier to work with.
*   Unit tests don't need to be efficient; feel free to take up all the CPU power and time you need to test a module sufficiently.
*   EASTL containers are not thread-safe, by design. Thus there is no need to do multithreading tests as long as you stay away from the usage of static and global variables.
*   Unit tests must succeed with no memory leaks and of course no memory corruption. The heap system should be configured to test for this, and heap validation functions are available to the unit tests while in the middle of runs.

## Things to Keep in Mind

*   When referring to EASTL functions and types from EASTL code, make sure to preface the type with the EASTL namespace. If you don't do this you can get collisions due to the compiler not knowing if it should use the EASTL namespace or the namespace of the templated type for the function or type.
*   Newly constructed empty containers do no memory allocation. Some STL and other container libraries allocate an initial node from the class memory allocator. EASTL containers by design never do this. If a container needs an initial node, that node should be made part of the container itself or be a static empty node object.
*   Empty containers (new or otherwise) contain no constructed objects, including those that might be in an 'end' node. Similarly, no user object (e.g. of type T) should be constructed unless required by the design and unless documented in the cotainer/algorithm contract. 
*   When creating a new container class, it's best to copy from an existing similar class to the extent possible. This helps keep the library consistent and resolves subtle problems that can happen in the construction of containers.
*   Be very careful about tweaking the code. It's easy to think (for example) that a > could be switch to a >= where instead it is a big deal. Just about every line of code in EASTL has been thought through and has a purpose. Unit tests may or may not currently test every bit of EASTL, so you can't necessarily rely on them to give you 100% confidence in changes. If you are not sure about something, contact the original author and he will tell you for sure.
*   Algorithm templates always work with iterators and not containers. A given container may of course implement an optimized form or an algorithm itself.
*   Make sure everything is heavily unit tested. If somebody finds a bug, fix the bug and make a unit test to make sure the bug doesn't happen again.
*   It's easy to get iterator categories confused or forgotten while implementing algorithms and containers.
*   Watch out for the strictness of GCC 3.4+. There is a bit of syntax — especially related to templates — that other compilers accept but GCC 3.4+ will not.
*   Don't forget to update the config.h EASTL_VERSION define before publishing.
*   The vector and string classes define iterator to be T*. We want to always leave this so — at least in release builds — as this gives some algorithms an advantage that optimizers cannot get around.

----------------------------------------------
End of document
