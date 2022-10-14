#include "stdio.h"
#include "stdlib.h"
#include "time.h"
/**
* main - prints random numbers
* Return: Always 0 (Successful)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = (rand() - RAND_MAX / 2) % 9;
	if (n > 5)
		printf("Last digit of n is %d and is greater than 5\n", n);
	else if ((n < 6) && (n != 0))
		printf("Last digit of n is %d and is less than 6 and not 0\n", n);
	else if (n == 0)
		printf("The last digit of n is %d and is zero\n", n);
	return (0);
}
