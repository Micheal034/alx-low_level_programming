#include "stdio.h"
/**
* main - prints alphabets in lowercase
* Return: Always 0 (Successful)
*/
int main(void)
{
	char ch, ch_f, ch_r;

	for (ch = 'a', ch_f = 'f', ch_r = 'r'; ch < 'e', ch_f < 'q', ch_r <= 'z'; ch++, ch_f++, ch_r++)
	{
		putchar(ch);
		putchar(ch_f);
		putchar(ch_r);
	}

	putchar('\n');
	return (0);
}
