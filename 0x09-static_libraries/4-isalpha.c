#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character to be checked
 * Return: 1 if c is a letter,if not 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z'));
}
