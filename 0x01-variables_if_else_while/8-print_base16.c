#include <stdio.h>
/**
 * main - printing the number base of 16
 * Return: Always 0
 */

int main(void)
{
	int i = '0';
	char l = 'a';

	for (; i <= '9'; i++) /* prints out numbers */
	{
		putchar(i);
	}
	for (; l < 'g'; l++) /* This prints leters */
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
