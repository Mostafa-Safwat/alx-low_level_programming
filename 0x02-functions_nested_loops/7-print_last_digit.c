#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number given to get the last digit from.
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
int last_digit = n % 10;
if (last_digit < 0)
{
last_digit = -last_digit;
}
last_digit += '0';
_putchar(last_digit);
return (last_digit - '0');
}
