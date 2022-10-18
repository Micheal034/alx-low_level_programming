#include "stdio.h"
/**
* main-prints all possible combinations of two two-digit numbers
* Return: Always 0
*/
int main(void)
{
	int dgt1;

	int dgt2;

	for (dgt1 = 0; dgt1 <= 98; dgt1++)
	{
		for (dgt2 = dgt1 + 1; dgt2 <= 99; dgt2++)
		{
			putchar((dgt1 / 10) + '0');
			putchar((dgt1 % 10) + '0');
			putchar(' ');
			putchar((dgt2 / 10) + '0');
			putchar((dgt2 % 10) + '0');

			if ((dgt1 == 98) && (dgt2 == 99))
				continue;
			{
					putchar(',');
					putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
