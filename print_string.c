#include "holberton.h"
/**
 * print_string - prints a string
 * @count: keeps count for printf func
 * @list: va_list list
 * Return: count
 */
int print_string(int count, va_list list)
{
	char *temp_string = va_arg(list, char *);
	int x = 0;

	while (temp_string && temp_string[x])
	{
		_putchar(temp_string[x]);
		x++;
		count++;
	}
	return (count);
}
