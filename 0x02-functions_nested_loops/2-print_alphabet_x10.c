#include "main.h"

/**
 *  print_alphabet_x10 - prints alphabet 10 times
 *  Return: Always return 0
 */

void print_alphabet_x10(void)
{
	char alpha, j = '0';

	for (; j <= '10'; j++)
	{
		alpha = 'a';
		for (; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
	}
	_putchar('\n');
}
