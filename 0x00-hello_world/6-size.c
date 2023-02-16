#include <stdio.h>
/**
 * main - The entry point of every program
 * Return: 0 means Success
 */
int main(void)
{
	int i;
	long long int d;
	char c;
	float f;
	long int l;
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	return (0);
}
