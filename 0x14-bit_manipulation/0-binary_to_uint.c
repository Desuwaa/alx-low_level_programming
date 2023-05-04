#include "main.h"

/**
 * binary_to_uint - Convert a binary number to an unsigned integer
 * @b: String representing a binary number
 * Return: converted number or 0 if b is NULL or if there are chars
 * that are not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, s, t, sum, pow;
	int base;

	base = 2;
	sum = 0;
	pow = 1;

	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
		;
	if (len == 1 && (b[0] == '0' || b[0] == '1'))
		return ((b[0] - 48));
	for (s = 0; b[s] != '\0'; s++)
	{
		if (b[s] != '0' && b[s] != '1')
			return (0);
		for (t = len - 1; t > 0; t--)
			pow = pow * base;
		sum = sum + (pow * (b[s] - 48));
		len--;
		pow = 1;
	}
	return (sum);
}
