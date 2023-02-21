#include "main.h"

/**
 *  jack_bauer - prints every minutes for agent jack bauer
 *
 *  starting from 00:00 to23:59
 *
 */

void jack_bauer(void)
{
	int m = 0, h;

	for (; m < 24; m++)
	{
		h = 0;
		for (; h < 60; h++)
		{
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar(':');
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar('\n');
		}
	}
}
