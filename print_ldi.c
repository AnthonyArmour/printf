#include "holberton.h"
/**
 * print_longnumber - int to string
 * @count: keeping count for printf
 * @n: input int
 * Return: count
 */
int print_longnumber(int count, long int n)
{
	unsigned long int x;
	unsigned long int nn = n;
	unsigned long int y = 1000000000;

	if (n < 0)
	{
		_putchar('-');
		count++;
		nn = -n;
	}
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
 * print_ldi - prints int
 * @count: keeping count
 * @list: argument list
 * Return: new count
 */
int print_ldi(int count, va_list list)
{
	count = print_longnumber(count, va_arg(list, long int));
	return (count);
}
