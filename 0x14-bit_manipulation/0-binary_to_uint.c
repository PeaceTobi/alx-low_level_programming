#include "main.h"
/**
  * binary_to_uint - function that converts a binary number to an unsigned int
  * @b: pointer to a string
  * Return: the converted number or 0 if it fails
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint, base;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
		;
	i--;
	for (base = 1, uint = 0; i >= 0; i--)
	{
		if (b[i] == '0')
		{
			base *= 2;
			continue;
		}
		else if (b[i] == '1')
		{
			uint += base;
			base *= 2;
			continue;
		}
		return (0);
	}
	return (uint);
}
