#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 *
 * Return: success
 */
void print_alphabet_x10(void)
{
	char q;
	int x;

	x = 0;

	while (x < 10)
	{
		q = 'a';
		while (q <= 'z')
		{
			_putchar(q);
			q++;
		}
		_putchar('\n');
		x++;
	}
}
