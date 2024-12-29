Building EA WebKit
------------------

This version supports Win32, Win64, XBox One, XboxOneGDK, XBSX, Stadia, PS5, PS4, and Linux platforms.

EA WebKit requires that you have proper development tools installed.  Contact your platform providers to install the proper SDKs.

It is recomended to unzip these files to as shallow a location on your hard-drive as possible. EAWebKit has a deep directory structure and you may run into OS path-size limits that prevent a successful build if it is installed in too deep a directory. 

Developer Requirements
----------------------

*Windows 32-bit*
 1. Install developer tools
	EA WebKit requires Visual Studio and Windows SDK to build.  
		
 2. Open the \Projects\Win32\EAWebKit\<EA WebKit Version No>\EAWebKit.sln
 3. Execute Build.

 This version was tested with VS2015 and Windows SDK version 10.0.10586.


*Windows 64-bit*
 1. Install developer tools
	EA WebKit requires Visual Studio and Windows SDK to build.  
		
 2. Open the \Projects\Win64\EAWebKit\<EA WebKit Version No>\EAWebKit.sln
 3. Execute Build.

 This version was tested with VS2015 and Windows SDK version 10.0.10586.


*Microsoft Xbox One*
 1. Install developer tools
	EA WebKit requires Visual Studio and Xbox One XDK to build.  
 2. Open the \Projects\XB1\EAWebKit\<EA WebKit Version No>\EAWebKit.sln
 3. Execute Build.

 This version was tested with VS2015 and Xbox One XDK version 180200.


*Sony Playstation 4*
 1. Install developer tools
    EA WebKit requires Visual Studio, Playstation 4 SDK and SN VSI tool to build.  
 2. Contact the SDK provider to acquire DLLInterface.h.  You should replace the existing version with the acquired version. 
 3. Open the \Projects\PS4\EAWebKit\<EA WebKit Version No>\EAWebKit.sln
 4. Execute Build.

*Linux*
 1. Install developer tools
    EA WebKit requires meson on linux. Install it using your package manager.
 2. cd to /Projects/Linux/EAWebKit/<EA WebKit Version No>
 3. Configure.
    $ meson setup build .
 4. Build.
    $ ninja -C build
    Built shared libaries: EAWebKit.so will be in the build directory.

