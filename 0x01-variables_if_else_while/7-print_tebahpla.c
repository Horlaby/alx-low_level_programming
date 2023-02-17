#include <stdio.h>
/**
 * main - This prints lowercase alphabets in reverse
 * Return: Always 0
 */

int main(void)
{
	int letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
