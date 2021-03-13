#ifndef HOLBERTON_H
#define HOLBERTON_H
/* STRUCTS */
typedef struct conversion_specifier{
	char letter;
	int (*f)(int count, va_list list);
}c_spec;
/* INCLUDES */
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/* FUNCTION PROTOTYPES */
int _putchar(char c);
int _printf(const char *format, ...);
#endif
