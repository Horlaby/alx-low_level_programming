#include "main.h"

/**
 * more_numbers - prints 0 - 14 10x
 *
 * Return: void
 *
 */

void more_numbers(void)
{
	int i = 0, k;

	while (i < 10)
	{
		k = 0;
		for (; k <= 14; k++)
		{
			if (k >= 10)
			_putchar('0' + k / 10);
			_putchar('0' + k % 10);
		}
		_putchar('\n');
		i++;
	}
}

