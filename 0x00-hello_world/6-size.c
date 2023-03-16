#include<stdio.h>
int main(void)
/**
* main - Entry point
* sizeof - Unary operator that evaluates to the size in memory of the variable or type, in bytes
* Return: Always 0 (Success)
*/
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
