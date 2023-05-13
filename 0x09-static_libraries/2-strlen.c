#include "main.h"

/**
 * _strlen - checks the length of string
 * @s: string to be checked
 * Return: length of string
 */

int _strlen(char *s)
{
	int string_length = 0;

	while (*s != '\0')
	{
		string_length++;
		s++;
	}

	return (string_length);
}
