#include "holberton.h"

/**
 * _isalpha - checks for alphabetic character.
 *
 * @c: parameter
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
