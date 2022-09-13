#include "holberton.h"

/**
 * _abs - Computes the absolute value of an integer.
 *
 * @n: The integer to be computed.
 * Return: Always 0.
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}
	return (n);
}