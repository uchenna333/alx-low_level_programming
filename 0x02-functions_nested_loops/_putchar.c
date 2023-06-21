#include <unistd.h>

/**
 * _putchar - This program writes the character c to the standard output
 * @c: The character to print
 * Return: 0 (succes)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
