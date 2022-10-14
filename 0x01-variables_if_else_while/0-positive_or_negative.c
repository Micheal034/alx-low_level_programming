#include "stdio.h"
#include "stdlib.h"
/**
* main - prints random numbers
* Return: Always 0 (Successful)
*/
int main(void)
{
	int n = rand();

	n = rand() % 56;
	printf("%d is positive\n", n);
	n = rand() * 0;
	printf("%d is 0\n", n);

	n = -rand();
	printf("%d is negative\n", n);

	return (0);
}
