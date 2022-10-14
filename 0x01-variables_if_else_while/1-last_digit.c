#include "stdio.h"
#include "stdlib.h"
#include "time.h"
/**
* main - prints random numbers
* Return: Always 0 (Successful)
*/
int main(void)
{
	unsigned int n;

	unsigned int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	if (lastDigit > 5)
		printf("Last digit of %u is %u and is greater than 5\n", n, lastDigit);
	else if ((lastDigit < 6) && (lastDigit != 0))
	printf("Last digit of %u is %u and is less than 6 and not 0\n", n, lastDigit);
	else if (lastDigit == 0)
		printf("The last digit of %u is %u and is zero\n", n, lastDigit);
	return (0);
}
