#include <stdio.h>
/**
 * main - print 012 to 789 with no duplicate digits : no 111, no 100 (012)
 * Return: Always 0
 */

int main(void)
{
	int hunds;
	int tens;
	int units;

	for (units = '0'; units <= '9'; units++) /*increment units*/
	{
		for (tens = (units + 1); tens <= '9'; tens++)
		{
			for (hunds = (tens + 1); hunds <= '9'; hunds++) /*hunds's ten+1*/
			{
				putchar(units);
				putchar(tens);
				putchar(hunds);
				if (units != '7' || tens != '8' || hunds != '9') /*print commas*/
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
