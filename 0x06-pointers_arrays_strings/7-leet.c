#include "main.h"

/**
 * leet -  encodes a string into 1337.
 * @s: string to code
 *
 * Return: the enconde string.
 */
char *leet(char *s)
{
	int x;
	int y;
	int z;

	char a[] = "oOlLeEaAtT";
	char b[] = "0011334477";

	x = 0;
	while (s[x] != '\0')
	{
		y = 0;
		z = 0;
		while (a[y] != '\0')
		{
			if (s[x] == a[y])
			{
				z = y;
				s[x] = b[z];
			}
			y++;
		}
		x++;
	}
	return (s);
}
