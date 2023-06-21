#include "main.h"

/**
 * print_alphabet - print alphabet in lower case and a  new line
 */

void print_alphabet_x10(void)

{
	char c;
	int n = 1;
	while (n <= 10)
	{

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
		_putchar('\n');
	n++;
	}
}
