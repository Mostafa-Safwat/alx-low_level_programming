#include "main.h"

int check_divisibility(int n, int i);

/**
 * check_divisibility - Checks if a number is divisible by another number
 * @n: The number to check
 * @i: The number to check
 *
 * Return: 1 if n is divisible by divisor, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_divisibility(n, n - 1));
}
/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to check
 * @i: The number to check
 * Return: 1 if n is prime, 0 otherwise
 */
int check_divisibility(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (check_divisibility(n, i - 1));
}
