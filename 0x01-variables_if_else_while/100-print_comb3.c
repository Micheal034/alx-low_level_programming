#include "stdio.h"
/**
* main-prints all possible different combinations of two digits
* Return: 0
*/
int main(void)
{
	int digit1;

	int digit2;

	for (digit1 = '0'; digit1 <= '8'; digit1++)
	{
		for (digit2 = '1'; digit2 <= '9'; digit2++)
		{
			putchar(digit1);
			putchar(digit2);

			if ((digit1 == '8') && (digit2 == '9'))
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
