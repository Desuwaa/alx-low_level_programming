#include <stdio.h>

/**
 * main - a program that prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguements strings
 * Return: Always return 0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
