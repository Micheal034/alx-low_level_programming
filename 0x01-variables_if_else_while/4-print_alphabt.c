#include "stdio.h"
/**
* main - prints alphabets in lowercase
* Return: Always 0 (Successful)
*/
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z'; ch++)
	{
		if ((ch != 'e') && (ch != 'q'))
			putchar(ch);
	}

	putchar('\n');
	return (0);
}
