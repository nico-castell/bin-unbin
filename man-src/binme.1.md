% binme(1) 1.1.0
% Nicolás Castellán
% May 2021

<!-- Use:                                                             -->
<!--   pandoc binme.1.md -s -t man -o binme.1                         -->
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
binme - Takes ASCII text and returns the binary of that text.

# SYNOPSIS
**binme** "Phrase"

**binme** *-t* "Phrase"

# DESCRIPTION
**binme** loops through the characters in the string and prints the bitset of each character to the console, followed by a space. It can also print a table containing the values in binary, hexadecimal, octal, decimal and the characters themselves.

# OPTIONS
**-t**
: Changes output mode to produce a table.

# EXAMPLES
**binme** "have a nice day"
: Will return the binary of the phrase "have a nice day".

# EXIT VALUES
**0**
: Success

**1**
: Incorrect use of arguments

# COPYRIGHT
Copyright © Nicolás Castellán 2021. License MIT. This software is provided "AS IS", there's no warrany of any kind.
