#include <stdio.h>
/**
 * main - Printing out base 10 digits
 * Return: Always 0 and it indicates success
 */

int main(void)
{
	int i;

	i = 0;

	for (; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
