#include "holberton.h"
/**
 * _printf - produces an output according to a format
 * @format: str input
 * Return: num of characters printed excluding \0
 */
int _printf(const char *format, ...)
{
	va_list list;
	int x = 0, count = 0, y = 0;
	int *x_ptr = &x;

	if (format == NULL)
		return (-1);
	va_start(list, format);
	for (; format && format[x]; x++)
	{
		if (format[x] == '%')
		{
			y = print_spec(x_ptr, count, format, list);
			if (y == -1)
				return (-1);
			count += y;
		}
		else
		{
			_putchar(format[x]);
			count++;
		}
	}
	va_end(list);
	return (count);
}
