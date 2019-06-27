#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
int a;

for (a = 1; a <= 100; a++)
{
	if ((a % 3 == 0) && (a % 5 == 0))
	{
		printf("FizzBuzz ");

	}
	else if (a % 3 == 0)
	{
		printf("Fizz");
		printf(" ");
	}
	else if (a % 5 == 0)
	{
		printf("Buzz");
		printf(" ");
	}
	else
	{
		printf("%d", a);
		printf(" ");
	}
}
putchar('\n');
return (0);
}
