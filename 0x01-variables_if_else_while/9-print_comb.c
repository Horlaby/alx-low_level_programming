#include <stdio.h>
/**
 * main - This prints numbers with commas
 * Return: Always 0
 */

int main(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		putchar(i);

		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
		return (0);
	}
}
