#include "stdio.h"
/**
* main - prints alphabets in lowercase
* Return: Always 0 (Successful)
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
