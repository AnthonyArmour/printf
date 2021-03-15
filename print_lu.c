#include "holberton.h"
/**
 * print_luint - prints long unsigned int
 * @count: keeping count for printf
 * @n: input int
 * Return: count
 */
int print_luint(int count, unsigned long int n)
{
	unsigned long int x;
	unsigned long int nn = n;
	unsigned long int y = 1000000000;

	if (nn < 1)
	{
		_putchar('0' + nn * 1);
		count++;
	}
	while (nn >= 1)
	{
		if (nn >= y)
		{
			x = nn / y;
			_putchar('0' + x);
			count++;
			nn = nn - (x * y);
			y = y / 10;
			while (nn < y)
			{
				_putchar('0' + 0);
				count++;
				y = y / 10;
			}
		}
		else
		{
			y = y / 10;
		}
	}

	return (count);
}
/**
 * print_lu - prints long unsigned int
 * @count: keeping count
 * @list: argument list
 * Return: new count
 */
int print_lu(int count, va_list list)
{
	count = print_luint(count, va_arg(list, unsigned long int));
	return (count);
}
