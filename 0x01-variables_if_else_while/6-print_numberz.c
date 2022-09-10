#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 *
 * Return: Always (Success)
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
