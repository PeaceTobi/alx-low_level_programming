#include "main.h"

/**
 * _strchr - function that locate a character in a string
 * @s: string to be searched
 * @c: string to be located
 * Return: if c is found - a pointer to be first occurence
 * if c is not found - NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
