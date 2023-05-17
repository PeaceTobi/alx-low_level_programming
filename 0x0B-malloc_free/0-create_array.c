#include "main.h"
#include <stdlib.h>

/**
 * *create_array - function that creates array of chars,
 * and intializes it with specific char
 * @c: char to initialize
 * @size: number of bytes to allocate
 *
 * Return: a pointer to the array, null if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array[size] = c;
	return (array);
}
