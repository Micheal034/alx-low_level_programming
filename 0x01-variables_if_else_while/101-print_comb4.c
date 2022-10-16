#include "stdio.h"
/**
* main-prints all possible different combinations of three digits
* Return: Always 0
*/
int main(void)
{
	int dgt1;

	int dgt2;

	int dgt3;

	for (dgt1 = '0'; dgt1 <= '7'; dgt1++)
	{
		for (dgt2 = dgt1 + 1; dgt2 <= '8'; dgt2++)
		{
			for (dgt3 = dgt2 + 1; dgt3 <= '9'; dgt3++)
			{
				putchar(dgt1);
				putchar(dgt2);
				putchar(dgt3);

				if ((dgt1 == '7') && (dgt2 == '8') && (dgt3 == '9'))
					continue;
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
