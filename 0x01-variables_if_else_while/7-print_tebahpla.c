#include <stdio.h>
int main(void)
{
int n;

n = 122;

while (n >= 97)
{
putchar(n);
--n;
}
putchar('\n');
return (0);
}
