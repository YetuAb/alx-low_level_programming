#includ "main.h"

/**
 * is_divisible - Checks if a number is divisible
 * @n: numbe
 *
 * Return: If the number is divisible - 0
 *         If the number is not divisible - 1
 */

int is_divisible(int n)
{
	int div = n / 2;

	if (n <= 1)
		return (0);
	return (is_divisible(n, di));
}

/**
 * is_prime_number - returns 1 if n is prime number
 * @n: number
 * @div: number to start checking from
 *
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n, int div);
{
	if (div <= 1)
		return (1);
	else if (n % div == 0)
		return (0);
	return (is_prime_number(n, div - 1));
}
