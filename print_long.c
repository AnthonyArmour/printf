#include "holberton.h"
/**
 * print_long - prints long num
 * @x_ptr: ptr to x
 * @count: int
 * @format: format str
 * @list: list
 * Return: count
 */
int print_long(int *x_ptr, int count, const char *format, va_list list)
{
	c_spec mods[] = {
		{'d', print_ldi},
		{'i', print_ldi},
/*		{"lu", print_lu},
		{'o', print_lo},
		{'x', print_lx},
		{'X', print_lX},
*/		{'\0', NULL}
	};
	int x = 0;

	for (x = 0; mods[x].letter != '\0'; x++)
	{
		if (mods[x].letter == format[*(x_ptr) + 2])
		{
			count = mods[x].f(count, list);
			*(x_ptr) += 1;
		}
	}
	return (count);
}
