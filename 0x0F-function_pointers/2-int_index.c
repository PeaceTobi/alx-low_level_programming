#include "function_pointers.h"

/**
 * int_index - function that searches for an integer in an 
 * array of integers
 * @array: The array of integers
 * @size: The size of array
 * @cmp: A pointer to the function to be use to compare values
 *
 * Return: if no element matches, return -1
 * if size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
