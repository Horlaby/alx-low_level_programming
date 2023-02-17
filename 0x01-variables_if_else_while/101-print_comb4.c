#include <stdio.h>
/**
 *main - print 00 to 99 with no duplicate digits or combos: no 11, no 10 (01)
 * *Return: Always 0 (Success)
 */

int main(void)
{
	int hunds;
	int tens;
	int units;

	for (units = '0'; units <= '9'; units++) /*increment tens*/
	{
		for (tens = (units + 1); tens <= '9'; tens++)
		{
			for (hunds = (tens + 1); hunds <= '9'; hunds++) /*one's ten+1*/
			{
				putchar(hunds);
				putchar(tens);
				putchar(units);
				if (hunds != '7' || tens != '8' || units != '9') /*print commas*/
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		putchar('\n');
		return (0);
}
