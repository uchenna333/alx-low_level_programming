#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
int n;
for (n = 0; n <= 9; n++)
{
	putchar((n % 10) + '0');
	putchar(',');
	putchar(' ');
}
putchar('\n');
return (0);
}
