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
	int i = 0, ii = 0, tempx = *(x_ptr) + 1;

	(void)list;

	for (; format[tempx]; tempx++, ii++)
	{
		for (i = 0; validspecs[i]; i++)
		{
			if (format[tempx] == validspecs[i])
			{
				_putchar(' ');
				count++;
				*(x_ptr) = tempx;
				return (count);
			}
		}
	}
	return (-1);
}
