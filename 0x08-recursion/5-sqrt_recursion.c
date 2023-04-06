#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
double sqrt(int n, int i);
int _sqrt_recursion(int n)
{
    if (n < 0)
    {
        return (-1);
    }
    else if (n == 0 || n == 1)
    {
        return (n);
    }
    else
    {
        return (sqrt(n, 1));
    }
}
/**
 * sqrt - helper function to recursively calculate square root
 * @n: the number to find the square root of
 * @i: the current guess for the square root
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
double sqrt(int n, int i)
{
    if (i * i == n)
    {
        return (i);
    }
    else if (i * i > n)
    {
        return (-1);
    }
    else
    {
        return (sqrt(n, i + 1));
    }
}
