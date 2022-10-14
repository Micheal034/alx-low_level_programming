#include "stdio.h"
#include "stdlib.h"
/**
* main - prints random numbers
* Return: Always 0 (Successful)
*/
signed int main(void)
{
	int n = rand();

	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is 0\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
