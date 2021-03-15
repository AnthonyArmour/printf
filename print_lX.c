#include "holberton.h"
/**
 * print_lX - prints hex of num
 * @count: keeps count
 * @list: va_list
 * Return: count
 */
int print_lX(int count, va_list list)
{
	unsigned long int temp_num = va_arg(list, unsigned long int);
	unsigned long int num;
	int i = 0, len = 0;
	char hexnum[50];

	while (temp_num != 0)
	{
		num = temp_num % 16;
		if (num < 10)
			num = num + 48;
		else
			num = num + 55;
		hexnum[i] = num;
		i++;
		temp_num = temp_num / 16;
	}
	hexnum[i] = '\0';
	while (hexnum[len] != '\0')
	{
		len++;
	}
	for (i = (len - 1); i >= 0; i--)
	{
		_putchar(hexnum[i]);
		count++;
	}
	return (count);
}