#include "stdio.h"
/**
* main-prints all possible combination of single digit numbers
* Return: Always 0 (Successful)
*/
int main(void)
{
	int sgl_digit;

	for (sgl_digit = '0'; sgl_digit <= '9'; sgl_digit++)
	{
		putchar(sgl_digit);
		if (sgl_digit != '9')
		{
			putchar (',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
