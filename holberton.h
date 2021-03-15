#ifndef HOLBERTON_H
#define HOLBERTON_H

/* INCLUDES */
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <string.h>

/* STRUCTS */
/**
 * struct conversion_specifier - used for function pointers
 * @letter: letter associated with function
 * @f: function to call
 */
typedef struct conversion_specifier
{
	char letter;
	int (*f)(int count, va_list list);
} spec_t;
/**
 * struct flag_struct - used to detect flags
 * @letter: flag
 * @f: function to call
 */
typedef struct flag_struct
{
	char letter;
	int (*f)(int count, const char *format, int *x_ptr, va_list list);
} flag_t;

/* FUNCTION PROTOTYPES */
int _putchar(char c);
char *_strdup(char *s);
int _strlen(char *s);
int _printf(const char *format, ...);
int print_char(int count, va_list list);
int print_string(int count, va_list list);
int print_di(int count, va_list list);
int print_number(int count, int n);
int p_binary(int count, va_list list);
int print_u(int count, va_list list);
int print_uint(int count, unsigned int n);
int print_x(int count, va_list list);
int print_X(int count, va_list list);
int print_o(int count, va_list list);
int print_SX(int count, unsigned int num);
int print_S(int count, va_list list);
int print_p(int count, va_list list);
int print_px(int count, unsigned long int ptr_val);
int print_rot13(int count, va_list list);
char *rot13(char *s);
int print_rev(int count, va_list list);
int print_long(int *x_ptr, int count, const char *format, va_list list);
int print_ldi(int count, va_list list);
int print_longnumber(int count, long int n);
int print_lu(int count, va_list list);
int print_luint(int count, unsigned long int n);
int print_lo(int count, va_list list);
int print_lx(int count, va_list list);
int print_lX(int count, va_list list);
int print_shortnumber(int count, short int n);
int print_hdi(int count, va_list list);
int print_short(int *x_ptr, int count, const char *format, va_list list);
int print_shortuint(int count, unsigned short int n);
int print_hu(int count, va_list list);
int print_ho(int count, va_list list);
int print_hx(int count, va_list list);
int print_hX(int count, va_list list);
int print_spec(int *x_ptr, int count, const char *format, va_list list);
int print_pound(int count, const char *format, int *x_ptr, va_list list);
int print_space(int count, const char *format, int *x_ptr, va_list list);
int print_plus(int count, const char *format, int *x_ptr, va_list list);

#endif
