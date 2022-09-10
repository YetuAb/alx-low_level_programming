#include <stdio.h>

/**
 * main - reversed alphabet
 *
 * Return: Always (Success)
 */
int main(void)
{
	char x;
	
	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
