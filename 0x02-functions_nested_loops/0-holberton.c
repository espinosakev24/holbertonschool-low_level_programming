#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
char n[10] = "Holberton";

int a;

a = 0;

while (a <= 9)
{
	_putchar(n[a]);
	a++;

}
_putchar('\n');
return (0);
}
