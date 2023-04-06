#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - returning the natural square root of n
 * @n: number we are calculating the natural square root of
 *
 * Return: result of square root
 */
int _sqrt_recursion(int n)
{
	float sqrt = _pow_recursion(n, 0.5);

	if (_pow_recursion(sqrt, 2) == n)
		return (sqrt);
	return (-1);
}
int _pow_recursion(int x, float y)
{
        if (y < 0)
                return (-1);
        if (y == 0)
                return (1);
        return (x * _pow_recursion(x, y - 1));
}
		
