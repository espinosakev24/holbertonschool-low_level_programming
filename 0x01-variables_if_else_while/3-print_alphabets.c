#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, a;

n = 97;

while (n <= 122)
{
putchar(n);
n++;
}
for (a = 65; a <= 90; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
