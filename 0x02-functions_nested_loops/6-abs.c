#include "main.h"
/**
 * _abs - prints the sign of a number
 * @n: the int that needs to be read.
 * Return: -n if the number is smaller than zero.
 * Or returns n if the number is greater than zero.
 */
int _abs(int n)
{
if (n < 0)
{
return (-n);
}
return (n);
}
