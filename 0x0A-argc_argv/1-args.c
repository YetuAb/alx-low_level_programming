#include <stdio.h>
#include "main.h"

/**
 * main - print name of program
 * @argc: count arguments
 * @argv: arguments
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
