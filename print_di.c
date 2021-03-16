#include "holberton.h"
/**
 * print_number - prints a number
 * @count: keeping count for printf
 * @n: input int
 * Return: count
 */
int print_number(int count, int n)
{
	char c = '0';

	if (n < 0)
	{
		_putchar('-');
		count++;
		if (n % 10 == 0)
			n = -n;
		else
		{
			n++;
			c = '1';
			n = -n;
		}
	}
	if (n / 10)
		count = print_number(count, n / 10);
	_putchar(n % 10 + c);
	count++;
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
