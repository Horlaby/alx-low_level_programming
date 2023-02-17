#include <stdio.h>
/**
 * main - This will print a-z except for q and e
 * Return: Always 0
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if ((alpha != 'q') && (alpha != 'e'))
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar ('\n');
	return (0);
}
