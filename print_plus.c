#include "holberton.h"
/**
 * print_plus - pads 0, 0x, or 0X
 * @count: keeps count
 * @format: input string
 * @x_ptr: keeps track of index
 * @list: argument list
 * Return: count
 */
int print_plus(int count, const char *format, int *x_ptr, va_list list)
{
	char *numberspecs = "di";
	int i = 0, temp;

	while (numberspecs[i])
	{
		if (format[*(x_ptr) + 2] == numberspecs[i])
		{
			temp = va_arg(list, int);
			if (temp >= 0)
			{
				_putchar('+');
				count++;
			}
			count += _printf("%d", temp);
			*(x_ptr) += 1;
		}
		i++;
	}
	return (count);
}
