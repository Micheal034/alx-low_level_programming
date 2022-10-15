#include "stdio.h"
/**
* main - prints alphabets in lowercase
* Return: Always 0 (Successful)
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch < 'e'; ch++)
	{
		putchar(ch);
	}

	char ch_f;

	for (ch_f = 'f'; ch_f < 'q'; ch_f++)
	{
		putchar(ch_f);
	}

	char ch_r;

	for (ch_r = 'r'; ch_r <= 'z'; ch_r++)
	{
		putchar(ch_r);
	}

	putchar('\n');
	return (0);
}
