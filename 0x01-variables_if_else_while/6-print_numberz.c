#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
int n;
char c;
for (n = 0; n < 10; n++)
{
	putchar((n % 10) + '0');
}
putchar('\n');
return (0);
}
