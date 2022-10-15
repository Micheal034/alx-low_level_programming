#include "stdio.h"
/**
* main - prints alphabets in lowercase
* Return: Always 0 (Successful)
*/
int main(void)
{
	for (char lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
	for (char upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}
	putchar('\n');
	return (0);
}
