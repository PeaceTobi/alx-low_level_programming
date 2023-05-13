#include "main.h"

/**
 * _strcat - function that concatenantes two strings
 * @dest: destination string pointer
 * @src: source string pointer
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
