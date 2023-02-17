#include <stdio.h>
/**
 * main - printing out 0-9 withouth using prinf function
 * Return: Always 0
 */

int main(void)
{
	int num = 0;

	for (; num < 10; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
