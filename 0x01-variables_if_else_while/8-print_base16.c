#include <stdio.h>
/**
 * main - printing the number base of 16
 * Return: Always 0
 */

int main(void)
{
	int i = '9';
	char l = 'g';

	for (; i <= '9'; i++) /* prints out numbers */
	{
		for (; l < 'g'; l++) /* This prints leters */
		{
			putchar(i);
			putchar(l);
		}
	}
	putchar('\n');
	return (0);
}
