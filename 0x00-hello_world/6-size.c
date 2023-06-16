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
printf("Size of char:%zu byte(s)\n", sizeof(a));
printf("Size of int:%zu byte(s)\n", sizeof(b));
printf("Size of long int:%zu byte(s)\n", sizeof(d));
printf("Size of long long byte:%zu byte(s)\n", sizeof(e));
printf("Size of float:%zu byte(s)\n", sizeof(g));
return (0);
}
