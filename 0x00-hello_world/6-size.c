#include <stdio.h>

/**
 * main - Printing the size of various types in C
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("char size: %d byte(s)\n", sizeof(a));
	printf("int size: %d byte(s)\n", sizeof(b)); 
	printf("long int size: %d byte(s)\n", sizeof(c)); 
	printf("long long int size: %d byte(s)\n", sizeof(d)); 
	printf("float size: %d byte(s)\n", sizeof(e)); 
	return (0);
}
