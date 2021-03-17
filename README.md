## \_printf project - By Kyle Gross and Anthony Armour
* [General info](#general-info)
* [Specifiers](#specifiers)
* [How to use](#how-to-use)

## General info
This program is a replica of the C standard library function, printf.

## Specifiers
* %c - prints a character
* %s - prints a string
* %d - prints an integer
* %i - prints an integer
* %b - prints in binary
* %o - prints in octal
* %u - prints an unsigned integer
* %x - prints in lowercase hexadecimal
* %X - prints in uppercase hexadecimal
* %S - prints '\x' + hexadecimal representation of the characters ascii value if it's a special character
* %r - prints a string in reverse
* %R - prints a string translated to rot13
* %p - prints an address

## How to use
\_printf("[FORMAT]", [ARGUMENTS]);

[FORMAT] = input string and/or specifiers
[ARGUMENTS] = arguments to specifiers
