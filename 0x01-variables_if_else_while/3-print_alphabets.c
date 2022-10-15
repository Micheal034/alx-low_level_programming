#include "stdio.h"
/**
* main - prints alphabets in lowercase
* Return: Always 0 (Successful)
*/
int main(void)
{
	char lower;

	char upper;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}
	putchar('\n');
	return (0);
}
