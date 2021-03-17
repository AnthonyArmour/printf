#include "holberton.h"
/**
 * _printf - produces an output according to a format
 * @format: str input
 * Return: num of characters printed excluding \0
 */
int _printf(const char *format, ...)
{
	va_list list;
	int xx = 0, count = 0;
	int *x_ptr = &xx;

	if (format == NULL)
		return (-1);
	va_start(list, format);
	for (; format && format[xx]; xx++)
	{
		if (count == -1)
			return (-1);
		if (format[xx] == '%')
		{
			count = print_spec(x_ptr, count, format, list);
		}
		else
		{
			_putchar(format[xx]);
			count++;
		}
	}
	va_end(list);
	return (count);
}
