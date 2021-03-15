#include "holberton.h"
/**
 * print_pound - pads 0, 0x, or 0X
 * @count: keeps count
 * @format: input string
 * @x_ptr: keeps track of index
 * @list: argument list
 * Return: count
 */
int print_pound(int count, const char *format, int *x_ptr, va_list list)
{
	(void)list;

	if (format[*(x_ptr) + 2] == 'o')
	{
		_putchar('0');
		count++;
	}
	else if (format[*(x_ptr) + 2] == 'x')
	{
		_putchar('0');
		_putchar('x');
		count += 2;
	}
	else if (format[*(x_ptr) + 2] == 'X')
	{
		_putchar('0');
		_putchar('X');
		count += 2;
	}
	return (count);
}
