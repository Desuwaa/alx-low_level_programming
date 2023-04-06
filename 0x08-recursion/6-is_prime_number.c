#include "main.h"

/**
 * test_prime - checks if number is prime recursively
 * @n: divisor
 * @i: number
 *
 * Return: 1 if n is a prime number and 0 if not a prime number
 */
int test_prime(int n, int i)
{
	if (i < 2 || i % n == 0)
		return (0);
	if (n > i / 2)
		return (1);

	return (test_prime(n + 1, i));
}
/**
 * is_prime_number - declares if an integer is either a prime number or not
 * @n: number to be evaluated
 *
 * Return: returns 1 if n is a prime number and 0 if not a prime number
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (test_prime(2, n));
}
