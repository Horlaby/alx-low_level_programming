#include <stdio.h>

/**
 * main - print lower and upper case of alphabet
 * Return: Always 0
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		putchar(upper); /* This prints out the uppercase */
		upper++;
	}

	putchar('\n');
	return (0);
}
