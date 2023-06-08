#include "main.h"
/**
  * clear_bit - function that sets the value of a bit to 0 at a given index
  * @n: unsigned long to change
  * @index: index to change to zero
  * Return: 1 if it worked or -1 if an error occurred
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int con;

	if (index > 53 || !n)
		return (-1);
	con = 1 << index;
	*n = (*n & ~con) | ((0 << index) & con);
	return (1);
}

