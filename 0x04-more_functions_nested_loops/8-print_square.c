#include "main.h"

/**
 * print_square - Prints a square
 * @size: the size of square
 *
 * Return: void
 */

void print_square(int size)
{
	int i, l;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			_putchar ('#');

			for (l = 1; l <= size; l++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
