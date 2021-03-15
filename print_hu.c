#include "holberton.h"
/**
 * print_shortuint - prints unsigned int
 * @count: keeping count for printf
 * @n: input int
 * Return: count
 */
int print_shortuint(int count, unsigned short int n)
{
	unsigned short int x;
	unsigned short int nn = n;
	unsigned short int y = 10000;

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
 * print_hu - prints unsigned int
 * @count: keeping count
 * @list: argument list
 * Return: new count
 */
int print_hu(int count, va_list list)
{
	count = print_shortuint(count, (unsigned short)va_arg(list, int));
	return (count);
}
