include "main.h"
/**
 * check_divisibility - Checks if a number is divisible by another number
 * @n: The number to check
 * @divisor: The divisor to check against
 *
 * Return: 1 if n is divisible by divisor, 0 otherwise
 */
int check_divisibility(int n, int divisor)
{
    if (n % divisor == 0)
        return (1);
    if (divisor * divisor > n)
        return (0);
    return (check_divisibility(n, divisor + 1));
}

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
    if (n <= 1)
        return (0);
    return (!check_divisibility(n, 2));
}
