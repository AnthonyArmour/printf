#include "holberton.h"
/**
 *_strdup - copies a string
 *@str: the string to copy
 *Return: NULL if string == NULL or pointer to copied string
 */
char *_strdup(char *str)
{
	char *dup;
	int i = 0;

	if (str == NULL)
		return (NULL);

	dup = (char *) malloc(_strlen(str) + 1);

	if (dup == NULL)
		return (NULL);

	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
