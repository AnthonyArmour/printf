#ifndef HOLBERTON_H
#define HOLBERTON_H

/* INCLUDES */
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/* STRUCTS */
typedef struct conversion_specifier{
	char letter;
	int (*f)(int count, va_list list);
}c_spec;

/* FUNCTION PROTOTYPES */
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(int count, va_list list);
int print_string(int count, va_list list);
int print_di(int count, va_list list);
int print_number(int count, int n);
int p_binary(int count, va_list list);

#endif
