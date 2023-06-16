#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
char a;
int b;
long d;
long long e;
float g;
printf("Size of a char: %zu byte(s)\n", sizeof(a));
printf("Size of an int: %zu byte(s)\n", sizeof(b));
printf("Size of a long int: %zu byte(s)\n", sizeof(d));
printf("Size of a long long int: %zu byte(s)\n", sizeof(e));
printf("Size of a float: %zu byte(s)\n", sizeof(g));
return (0);
}
