#include "holberton.h"
/**
 * _printf - produces an output according to a format
 * @format: str input
 * Return: num of characters printed excluding \0
 */
int _printf(const char *format, ...)
{
	va_list list;
	int x = 0, count = 0;
	int *x_ptr = &x;

	va_start(list, format);
	while (format && format[x])
	{
		if (format[x] == '%')
		{
			if (format[x + 1] == '%')
			{
				_putchar(format[x + 1]);
				count++;
			}
			else if (format[x + 1] == 'l')
			{
				count = print_long(x_ptr, count, format, list);
				x++;
			}
			else if (format[x + 1] == 'h')
			{
				count = print_short(x_ptr, count, format, list);
				x++;
			}
			else
			{
				count = print_spec(x_ptr, count, format, list);
			}
		}
		else
		{
			_putchar(format[x]);
			count++;
		}
		x++;
	}
	return (count);
}
