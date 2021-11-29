% unbinme(1) 1.1.4
% Nicolás Castellán <cnicolas.developer@gmail.com>
% May 2021

<!-- Use:                                                             -->
<!--   pandoc unbinme.1.md -s -t man -o unbinme.1                     -->
<!-- to convert this markdown to groff format                         -->
<!-- Choose from these sections:                                      -->
<!-- 1. Executable programs: Or, shell commands.                      -->
<!-- 2. System calls: Functions provided by the kernel.               -->
<!-- 3. Library calls: Functions within program libraries.            -->
<!-- 4. Special files.                                                -->
<!-- 5. File formats and conventions: For example, “/etc/passwd”.     -->
<!-- 6. Games.                                                        -->
<!-- 7. Miscellaneous: Macro packages and conventions, such as groff. -->
<!-- 8. System administration commands: Usually reserved for root.    -->
<!-- 9. Kernel routines: Not usually installed by default.            -->

# NAME
unbinme - Takes input in binary and returns ASCII text

# SYNOPSIS
**unbinme** XXXXXXXX XXXXXXXX ...

**unbinme** *-t* XXXXXXXX XXXXXXXX ...

# DESCRIPTION
**unbinme** takes each argument as a bitset, and transforms each bitset into ASCII characters and prints them to the console. It can also print a table containing the values in binary, hexadecimal, octal, decimal and the characters themselves.

# OPTIONS
**-t**
: Changes output mode to produce a table

# EXAMPLES
**unbinme** 01101000 01100001 01110110 01100101 00100000 01100001 00100000 01101110 01101001 01100011 01100101 00100000 01100100 01100001 01111001
: Will return the phrase "have a nice day"

# EXIT VALUES
**0**
: Success

**1**
: Incorrect use of arguments

# COPYRIGHT
Copyright © Nicolás Castellán 2021. License MIT. This software is provided "AS IS", there's no warranty of any kind.
