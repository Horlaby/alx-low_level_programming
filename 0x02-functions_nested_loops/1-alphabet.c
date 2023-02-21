#include "main.h"
/**
 * print_alphabet - prints lowercase alphabets
 * Return: 0
 */

void print_alphabet(void)
{
	char leta;

	leta =  'a';
	for (; leta <= 'z'; leta++)
	{
		_putchar(leta);
	}
	_putchar('\n');
}
