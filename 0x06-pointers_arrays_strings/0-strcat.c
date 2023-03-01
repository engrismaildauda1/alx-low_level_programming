#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: input parameter string
 * @src: input parameter string
 * Return: dest
**/

char *_strcat(char *dest, char *src)
{
	int dest_len = strlen(dest);
	int x;

	for (x = 0; src[x] != '\0'; x++)
		dest[dest_len + x] = src[x];

	dest[dest_len + x] = '\0';

	return (dest);
}
