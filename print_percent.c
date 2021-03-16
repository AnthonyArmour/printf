#include "holberton.h"
/**
 *
 *
 *
 *
 */
int print_percent(int count, const char *format, int *x_ptr)
{
	int i, signal = 0;

	if (format[*(x_ptr) + 1] == '%')
	{
		_putchar('%'), count++, *(x_ptr) += 1;
		return (count);
	}
//	for (i = *(x_ptr) + 1; i < _strlen((char *)format); i++)
//		if (format[i] != ' ')
//			signal = 1;
	if (signal == 0)
		return (-1);
	else
		_putchar('%'), count++;
//	_putchar(format[*(x_ptr)]), count++;
	/*if (format[*(x_ptr)] != '\n')
	 *(x_ptr) += 1;*/
	return (count);
}
