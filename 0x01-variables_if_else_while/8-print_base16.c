#include "stdio.h"
/**
* main-prints all number of base 16 in lower case
* Return: Always 0 (Successful)
*/
int main(void)
{
	char chNum, chAlph;

	for (chNum = '0'; chNum <= '9'; chNum++)
	{
		putchar(chNum);
	}

	for (chAlph = 'a'; chAlph <= 'f'; chAlph++)
	{
		putchar(chAlph);
	}

	putchar('\n');
	return (0);
}
