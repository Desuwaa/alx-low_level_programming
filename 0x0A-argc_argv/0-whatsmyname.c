#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints its name
 * @argc: arguement counter
 * @argv: array of strings of strings of arguements
 *
 * Return: always return 0
 */
int main(int argc, char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
