#include <stdio.h>

/**
 * main - Prints all arguments it receives.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;

	return (0);
}
