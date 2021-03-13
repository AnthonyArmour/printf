#include "holberton.h"
/**
 * print_char - prints a char
 * @count: keeps count for printf func
 * @list: argument to print
 * Return: count
 */
int print_char(int count, va_list list)
{
	_putchar((char)va_arg(list, int));
	count++;

	return (count);
}
