==============================================================
terminal-progress-bar-cpp
==============================================================

-------------------------------------------------------------------------------
Small and simple C++ class to create a progress bar in ANSI-standard terminals.
-------------------------------------------------------------------------------

.. image:: https://api.travis-ci.org/gbmhunter/terminal-progress-bar-cpp.png?branch=master   
	:target: https://travis-ci.org/gbmhunter/terminal-progress-bar-cpp

- Author: gbmhunter <gbmhunter@gmail.com> (http://www.cladlab.com)
- Created: 2014/05/27
- Last Modified: 2014/05/27
- Version: v1.0.0.0
- Company: CladLabs
- Project: Free Code Libraries
- Language: C++
- Compiler: GCC	
- uC Model: n/a
- Computer Architecture: n/a
- Operating System: n/a
- Documentation Format: Doxygen
- License: GPLv3

.. role:: bash(code)
	:language: bash

Description
===========



Installation
============

1. Clone the git repo onto your local storage.

2. Run `make all` to compile and run unit tests. Do not worry about error messages being printed when unit tests are run, the unit tests are designed to specifically cause errors to test the response.

3. To include into your embedded (or otherwise) firmware/software project, copy the repo into your project folder (or other suitable place), include the file "/api/ComPort.hpp" from your C++ code, and make sure to compile all the files within "/src/".


Dependencies
============

The following table lists all of projects dependencies.

====================== ==================== ======================================================================
Dependency             Delivery             Usage
====================== ==================== ======================================================================
<cstdint>              Standard C library   Fixed-width integer definitions (e.g. uint32_t).
====================== ==================== ======================================================================

Issues
======

See GitHub Issues.

Usage
=====

In main.c add...

::

	

	
	int main()
	{
		
	
	}
	

	
FAQ
===

// Nothing here yet


Changelog
=========

========= ========== ===================================================================================================
Version   Date       Comment
========= ========== ===================================================================================================
v1.0.0.0  2014/05/27 Initial commit. Progress bar tested and working in Linux (Ubuntu). Eclipse project files included.
========= ========== ===================================================================================================