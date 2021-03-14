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
		{'u', print_u},
		{'b', p_binary},
		{'x', print_x},
		{'X', print_X},
		{'o', print_o},
		{'S', print_S},
		{'p', print_p},
		{'R', print_rot13},
		{'r', print_rev},
		{'\0', NULL}
	};
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
			if (format[x + 1] == 'l')
			{
				count = print_long(x_ptr, count, format, list);
				x++;
			}
			for (y = 0; specs[y].letter; y++)
			{
				if (specs[y].letter == format[x + 1])
				{
					count = specs[y].f(count, list);
					x++;
				}
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
