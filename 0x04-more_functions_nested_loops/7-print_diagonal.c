#include "holberton.h"
#include <stdio.h>

/**
 * print_diagonal - The diagonal line dependent on the int n.
 * @n : The number of lines uese '\' characters.
 * Return: Void.
 */
void print_diagonal(int n)
{
	int i;
	int spaces;

	for (i = 0; i < n; i++)
	{
		for (spaces = 0; spaces < i; spaces++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}

