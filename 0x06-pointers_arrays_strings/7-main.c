#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: always 0
 */
int main(void)
{
	char s[] = "Expec best. Prepare for worst. Capitalize on what comes.\n";
	char *p;

	p = leet(s);
	printf("%s", p);
	printf("%s", s);
	return (0);

}
