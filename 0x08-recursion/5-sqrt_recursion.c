#include "main.h"

/**
 * _sqrt - recursing to find the natural square root of a number
 * @n: multiplier
 * @q: square root of
 *
 * Return: result of square root of q
 */
int _sqrt(int n, int q)
{
	if (n * n == q)
	{
		return (n);
	}
	if (n == q)
	{
		return (-1);
	}

	return (_sqrt(n + 1, q));
}

/**
 * _sqrt_recursion - returning the natural square root of n
 * @n: number we are calculating the natural square root of
 *
 * Return: result of square root
 */
int _sqrt_recursion(int n)
{
	if (n < 1)
	{
		return (-1);
	}

	return (_sqrt(1, n));
}
