#include<stdio.h>
/**
 * main - prints three digits
 * Return: always 0
 */
int main(void)
{
	int n, m, o;

	for (n = 48; n < 58; n++)
		for (m = 49; m < 58; m++)
			for (o = 50; o < 58; o++)
			{
				if (o > m && m > n)
				{
					putchar (m);
					putchar (n);
					putchar (o);
					if (n != 55 || m != 56)
					{
						putchar (',');
						putchar (' ');
					}
				}
			}
	putchar ('\n');
	return (0);
}
