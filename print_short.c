#include "holberton.h"
/**
 * print_short - prints short num
 * @x_ptr: ptr to x
 * @count: int
 * @format: format str
 * @list: list
 * Return: count
 */
int print_short(int *x_ptr, int count, const char *format, va_list list)
{
	c_spec mods[] = {
		{'d', print_hdi},
		{'i', print_hdi},
/*		{'u', print_hu},
		{'o', print_ho},
		{'x', print_hx},
		{'X', print_hX},
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
