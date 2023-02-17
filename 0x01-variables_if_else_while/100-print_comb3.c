#include <stdio.h>
/**
 * main - printing combination of numbers
 * Return: Always 0
 */

int main(void)
{
	int tens;
	int units;

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (units = '1'; units <= '9'; units++)
		{
			putchar(tens);
			putchar(units);

			if (!(tens == '9' && units == '9')) /* this skips the comma */
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
