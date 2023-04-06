/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
    if (n <= 1)
        return (0);
    if (n <= 3)
        return (1);
    int i;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return (0);
    }
    return (1);
}
