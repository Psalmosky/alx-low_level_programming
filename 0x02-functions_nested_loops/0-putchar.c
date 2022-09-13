#include "holberton.h"

/**
 * main - Prints _putchar, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char *_putchar = _putchar;

	while (*_putchar)
	{
		_putchar(*_putchar);
		_putchar++;
	}
	_putchar('\n');
	return (0);
}
