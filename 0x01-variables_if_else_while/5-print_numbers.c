#include <stdio.h>

/**
 * main - Printing numbers from 0 to 9
 *
 * Return: Always (Success)
 */
int main(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
