# Omega2 Cross Compiler:

A docker file for an Omega2 Cross Compiler for C/C++ - added functionality for external C++ libraries and a GNU Debugger

# Installation:

Open Docker Terminal:

    docker pull finitespiral/omega2-cross-compiler
    
Requires additional changes to the lede system to reduce compiler size and add support for external resources

# Usage:
Compile command for GPIO.cpp:

    sudo sh xCompile.sh -buildroot /lede/ -lib ugpio
