#include "holberton.h"
/**
 * print_percent - prints %
 * @count: keeps count
 * @format: format str
 * @x_ptr: index
 * Return: count
 */
int print_percent(int count, const char *format, int *x_ptr)
{
	int signal = 0;

	if (format[*(x_ptr) + 1] == '%')
	{
		_putchar('%'), count++, *(x_ptr) += 1;
		return (count);
	}
	if (signal == 0)
		return (-1);
	_putchar('%'), count++;
	return (count);
}
