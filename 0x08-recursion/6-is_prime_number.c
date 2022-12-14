#include "main.h"

/**
 * is_prime_number - Checks if a number is divisible
 * @n: number
 *
 * Return: If the number is divisible - 0
 *         If the number is not divisible - 1
 */

int is_prime_number(int n)
{
	int div = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, div));
}

/**
 * is_prime - returns 1 if n is prime number
 * @n: number
 * @div: number to start checking from
 *
 * Return: 1 if prime, 0 otherwise
 */

int is_prime(int n, int div)
{
	if (div <= 1)
		return (1);
	else if (n % div == 0)
		return (0);
	return (is_prime(n, div - 1));
}
