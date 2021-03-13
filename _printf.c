#include "holberton.h"
/**
 * _printf - produces an output according to a format
 * @format: str input
 * Return: num of characters printed excluding \0
 */
int _printf(const char *format, ...)
{
	va_list list;
	int x = 0, y = 0;
	int count = 0;

	c_spec specs[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_di},
		{'i', print_di},
		{'\0', NULL}
	};
	va_start(list, format);
	while (format && format[x])
	{
		if (format[x] == '%')
		{
			y = 0;
			if (format[x + 1] == '%')
			{
				_putchar(format[x + 1]);
				count++;
			}
			while (specs[y].letter)
			{
				if (specs[y].letter == format[x + 1])
				{
					count = specs[y].f(count, list);
					x++;
				}
				y++;
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
