#include "holberton.h"
/**
 * print_space - pads 0, 0x, or 0X
 * @count: keeps count
 * @format: input string
 * @x_ptr: keeps track of index
 * @list: list of arguments
 * Return: count
 */
int print_space(int count, const char *format, int *x_ptr, va_list list)
{
	char *validspecs = "csdiuxXop";
	int i = 0;

	(void)list;

	while (validspecs[i])
	{
		if (format[*(x_ptr) + 2] == validspecs[i])
		{
			_putchar(' ');
			count++;
		}
		i++;
	}
	return (count);
}
