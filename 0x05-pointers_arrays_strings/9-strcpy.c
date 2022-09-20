#include "main.h"

/**
 * _strcpy - copy and paste string
 * @dest: destination
 * @src: source
 *
 * Return: destination
 */

char *_strcpy(char *dest, char *src);
{
	int i = 0;

	while (*(src + i) != '\n')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\n';

	return (dest);
}
