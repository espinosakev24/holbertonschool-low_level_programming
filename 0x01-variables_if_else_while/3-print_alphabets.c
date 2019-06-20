#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
n = 97;

while (n <= 122)
{
putchar(n);
n++;
}
for (int N = 65; N <= 90; N++)
{
putchar(N);
}

putchar('\n');
return (0);
}
