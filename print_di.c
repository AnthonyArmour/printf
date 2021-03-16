#include "holberton.h"
/**
 * print_number - int to string
 * @count: keeping count for printf
 * @n: input int
 * Return: count
 */
int print_number(int count, int n)
{
	unsigned int x;
	unsigned int nn = n;
	unsigned int y = 1000000000;

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
 * print_di - prints int
 * @count: keeping count
 * @list: argument list
 * Return: new count
 */
int print_di(int count, va_list list)
{
	int num = va_arg(list, int);

	if (num == 0)
	{
		_putchar('0');
		count++;
		return (count);
	}
	count = print_number(count, num);
	return (count);
}
