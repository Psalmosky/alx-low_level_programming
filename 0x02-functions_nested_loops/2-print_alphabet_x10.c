#include "holberton.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase
 * followed by a new line.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
