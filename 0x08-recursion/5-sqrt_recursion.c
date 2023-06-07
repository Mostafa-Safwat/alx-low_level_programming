#include "main.h"

/**
 * sqrt_helper - returns the natural square root of a number.
 * @n: input number.
 * @i: number to check if it is a natural square root of n.
 *
 * Return: the natural square root of n, -1 if n does not have
 * a natural square root.
 */
int sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 *
 * Return: the natural square root of n, -1 if n does not have
 * a natural square root.
 */
int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - returns the natural square root of a number.
 * @n: input number.
 * @i: number to check if it is a natural square root of n.
 *
 * Return: the natural square root of n, -1 if n does not have
 * a natural square root.
 */

int sqrt_helper(int n, int i)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (sqrt_helper(n, i + 1));
}
