#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, a;

n = 48;
a = 48;
while (n <= 57)
{
while (a <= 57)
{
putchar(n);
putchar(a);
if (a != 57 || n != 57)
{
putchar(44);
}
putchar(' ');
a++;
}
n++;
a = 48;
}
putchar('\n');
return (0);
}
