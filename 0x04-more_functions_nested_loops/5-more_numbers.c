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

	while (i < 11)
	{
		k = 0;
		for (; k <= 14; k++)
		{
			_putchar('0' + k);
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}

