#include "stdio.h"

/**
* main - prints the size of various data types
* Return: Always 0 (Successful)
*/

int main(void)
{
	printf("The size of the char data type  is %d byte(s)\n", sizeof(char));
	printf("The size of the int data type  is %d byte(s)\n", sizeof(int));
	printf("The size of the float data type is %d byte(s)\n", sizeof(float));
	printf("The size of the double data type is %d byte(s)", sizeof(double));
	return (0);
}
