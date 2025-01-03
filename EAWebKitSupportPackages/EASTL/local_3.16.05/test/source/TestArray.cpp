/////////////////////////////////////////////////////////////////////////////
// Copyright (c) Electronic Arts Inc. All rights reserved.
/////////////////////////////////////////////////////////////////////////////


#include "EASTLTest.h"
#include <EASTL/array.h>
#include <EABase/eabase.h>



using namespace eastl;



// Template instantations.
// These tell the compiler to compile all the functions for the given class.
template struct eastl::array<int>;
template struct eastl::array<Align32>; // VC++ fails to compile due to error generated by the swap function. C2718: http://msdn.microsoft.com/en-us/library/vstudio/sxe76d9e.aspx


int TestArray()
{
	int nErrorCount = 0;

	{ 
		array<int, 5> a = { { 0, 1, 2, 3, 4 } };
		array<int, 5> b = { { 0, 1, 2, 3    } };
		array<int, 5> c = { { 4, 3, 2, 1, 0 } };
		array<int, 0> d = { { 0 } };

		VERIFY(!a.empty());
		VERIFY(a.size() == 5);
		VERIFY(a[0] == 0);
		VERIFY(a[4] == 4);

		VERIFY(!b.empty());
		VERIFY(b.size() == 5);
		VERIFY(b[0] == 0);
		VERIFY(b[3] == 3);

		VERIFY(d.empty());
		VERIFY(d.size() == 0);

		// swap
		a.swap(c);
		VERIFY(a[0] == 4);
		VERIFY(c[0] == 0);

		// begin, end
		array<int, 5>::iterator it = a.begin();
		VERIFY((a.validate_iterator(it) & (isf_valid | isf_can_dereference)) != 0);
		VERIFY(*it == 4);

		++it;
		VERIFY(*it == 3);

		++it;
		VERIFY(*it == 2);

		--it;
		VERIFY(*it == 3);

		it += 3;
		VERIFY((a.validate_iterator(it) & (isf_valid | isf_can_dereference)) != 0);
		VERIFY(*it == 0);

		++it;
		VERIFY(it == a.end());
		VERIFY((a.validate_iterator(it) & isf_valid) != 0);
		VERIFY(a.validate());

		// rbegin, rend
		array<int, 5>::reverse_iterator itr = a.rbegin();
		VERIFY((a.validate_iterator(itr.base()) & (isf_valid | isf_can_dereference)) != 0);
		VERIFY(*itr == 0);
		
		itr++;
		VERIFY(*itr == 1);

		// data
		int* pArray = a.data();
		VERIFY(pArray == a.mValue);

		// front
		int& nFront = a.front();
		VERIFY(nFront == 4);

		// back
		int& nBack = a.back();
		VERIFY(nBack == 0);

		// at
		VERIFY(a[0] == a.at(0));
		#if EASTL_EXCEPTIONS_ENABLED
			bool bExceptionOccurred = false;
			try{
				int x = a.at(100);
				VERIFY(x != -1);
			}
			catch(...){
				bExceptionOccurred = true;
			}
			VERIFY(bExceptionOccurred);
		#endif

		// global operators
		a[0] = 0; a[1] = 1; a[2] = 2; a[3] = 3; a[4] = 4;  // 01234
		b[0] = 0; b[1] = 1; b[2] = 2; b[3] = 3; b[4] = 4;  // 01234
		c[0] = 0; c[1] = 1; c[2] = 2; c[3] = 3; c[4] = 9;  // 01239

		VERIFY( (a == b));
		VERIFY(!(a != b));
		VERIFY(!(a  < b));
		VERIFY( (a <= b));
		VERIFY( (a >= b));
		VERIFY(!(a  > b));

		VERIFY(!(a == c));
		VERIFY( (a != c));
		VERIFY( (a  < c));
		VERIFY( (a <= c));
		VERIFY(!(a >= c));
		VERIFY(!(a  > c));

		// deduction guides
		#ifdef __cpp_deduction_guides
			array deduced {1,2,3,4,5};

			static_assert(eastl::is_same_v<decltype(deduced)::value_type, int>, "deduced array value_type mismatch");
			VERIFY(deduced.size() == 5);
		#endif
	}

	// constexpr tests
	{
	#ifndef EA_NO_CPP14_CONSTEXPR
		EA_CPP14_CONSTEXPR eastl::array<int, 4> a = {{ 0, 1, 2, 3 }};

		static_assert(a == eastl::array<int, 4>{{ 0, 1, 2, 3 }}, "array constexpr failure");

		static_assert(a[0] == 0, "array constexpr failure");
		static_assert(a[1] == 1, "array constexpr failure");
		static_assert(a[2] == 2, "array constexpr failure");
		static_assert(a[3] == 3, "array constexpr failure");

		static_assert(a.at(0) == 0, "array constexpr failure");
		static_assert(a.at(1) == 1, "array constexpr failure");
		static_assert(a.at(2) == 2, "array constexpr failure");
		static_assert(a.at(3) == 3, "array constexpr failure");

		static_assert(a.data()[0] == 0, "array constexpr failure");
		static_assert(a.data()[1] == 1, "array constexpr failure");
		static_assert(a.data()[2] == 2, "array constexpr failure");
		static_assert(a.data()[3] == 3, "array constexpr failure");

		static_assert(a.empty() == false, "array constexpr failure");
		static_assert(a.size() == 4, "array constexpr failure");
		static_assert(a.max_size() == 4, "array constexpr failure");

		static_assert(a.front() == 0, "array constexpr failure");
		static_assert(a.back() == 3, "array constexpr failure");

		static_assert(a.begin()[0] == 0, "array constexpr failure");
		static_assert(a.begin()[1] == 1, "array constexpr failure");
		static_assert(a.begin()[2] == 2, "array constexpr failure");
		static_assert(a.begin()[3] == 3, "array constexpr failure");

		static_assert(a.cbegin()[0] == 0, "array constexpr failure");
		static_assert(a.cbegin()[1] == 1, "array constexpr failure");
		static_assert(a.cbegin()[2] == 2, "array constexpr failure");
		static_assert(a.cbegin()[3] == 3, "array constexpr failure");

		static_assert(a.crbegin()[0] == 3, "array constexpr failure");
		static_assert(a.crbegin()[1] == 2, "array constexpr failure");
		static_assert(a.crbegin()[2] == 1, "array constexpr failure");
		static_assert(a.crbegin()[3] == 0, "array constexpr failure");

		static_assert(a.end()[-1] == 3, "array constexpr failure");
		static_assert(a.end()[-2] == 2, "array constexpr failure");
		static_assert(a.end()[-3] == 1, "array constexpr failure");
		static_assert(a.end()[-4] == 0, "array constexpr failure");

		static_assert(a.cend()[-1] == 3, "array constexpr failure");
		static_assert(a.cend()[-2] == 2, "array constexpr failure");
		static_assert(a.cend()[-3] == 1, "array constexpr failure");
		static_assert(a.cend()[-4] == 0, "array constexpr failure");

		static_assert(a.crend()[-1] == 0, "array constexpr failure");
		static_assert(a.crend()[-2] == 1, "array constexpr failure");
		static_assert(a.crend()[-3] == 2, "array constexpr failure");
		static_assert(a.crend()[-4] == 3, "array constexpr failure");
	#endif
	}

	return nErrorCount;
}









