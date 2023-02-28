#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, x, n, len, y, digit;

	i = 0;
	x = 0;
	n = 0;
	len = 0;
	y = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && y == 0)
	{
		if (s[i] == '-')
			++x;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (x % 2)
				digit = -digit;
			n = n * 10 + digit;
			y = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			y = 0;
		}
		i++;
	}

	if (y == 0)
		return (0);

	return (n);
}
