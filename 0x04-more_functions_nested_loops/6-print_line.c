#include "main.h"

/**
 * print_line - This prints out a straight line
 * @n: number of times to print
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (i <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
