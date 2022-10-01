#include <unnistd.h>

/**
 * _putchar - writes c to stdout
 * @c: character
 *
 * Return: 1 (success)
 *         -1 (error)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
