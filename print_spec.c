#include "holberton.h"
/**
 * print_spec - list of normal specifiers
 * @x_ptr: to maintain index position of format
 * @count: to keep counting
 * @format: input string
 * @list: argument list
 * Return: count
 */
int print_spec(int *x_ptr, int count, const char *format, va_list list)
{
	int i = 0, ii, signal = 0, signal2 = 0;
	spec_t specs[] = {
		{'c', print_char}, {'s', print_string}, {'d', print_di}, {'i', print_di},
		{'u', print_u}, {'b', p_binary}, {'x', print_x}, {'X', print_X},
		{'o', print_o}, {'S', print_S}, {'p', print_p}, {'R', print_rot13},
		{'r', print_rev}, {'\0', NULL}
	};
	flag_t flags[] = {
		{'#', print_pound}, {' ', print_space}, {'+', print_plus}, {'\0', NULL}
	};

	for (; specs[i].letter; i++)
	{
		for (ii = 0; flags[ii].letter; ii++)
		{
			if (flags[ii].letter == format[*(x_ptr) + 1])
			{
				count = flags[ii].f(count, format, x_ptr, list), signal = 1;
				if (count != -1)
					*(x_ptr) += 1;
			}
		}
		if (specs[i].letter == format[*(x_ptr) + 1])
		{
			count = specs[i].f(count, list);
			*(x_ptr) += 1, signal = 1;
		}
	}
	if (signal == 0 || format[*(x_ptr) + 1] == '%')
	{
		for (i = *(x_ptr) + 1; i < _strlen((char *)format); i++)
			if (format[i] != ' ')
				signal2 = 1;
		if (signal2 == 0)
			return (-1);
		_putchar(format[*(x_ptr)]), count++;
		if (format[*(x_ptr) + 1] != '\n')
			*(x_ptr) += 1;
	}
	return (count);
}
