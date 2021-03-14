#include "holberton.h"
/**
 * rot13 - translates a string TO rot13
 * @s: the string to translate
 * Return: translated string
 */
int print_rot13(int count, va_list list)
{
	char *new_s, *s = va_arg(list, char *);
	int i = 0;

	new_s = rot13(s);
	printf("successfully stored into new_s\n");
	printf("new_s is: %s\n", new_s);
	while (new_s && new_s[i])
	{
		_putchar(new_s[i]);
		i++;
		count++;
	}
	return (count);
}
/**
 * rot13 - translates a string TO rot13
 * @s: the string to translate
 *
 * Return: translated string
 */
char *rot13(char *s)
{
	int i, c;
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLM[\\]^_`nopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		printf("i = %d\n", i);
		c = s[i];
		if (c >= 'A' && c <= 'z')
		s[i] = rot13[c - 65];
	}
	return (s);
}
