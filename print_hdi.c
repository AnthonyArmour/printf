#include "holberton.h"
/**
 * print_shortnumber - int to string
 * @count: keeping count for printf
 * @n: input int
 * Return: count
 */
int print_shortnumber(int count, short int n)
{
	unsigned short int x;
	unsigned short int nn = n;
	unsigned short int y = 10000;

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
 * print_hdi - prints int
 * @count: keeping count
 * @list: argument list
 * Return: new count
 */
int print_hdi(int count, va_list list)
{
	count = print_shortnumber(count, (short int)va_arg(list, int));
	return (count);
}
