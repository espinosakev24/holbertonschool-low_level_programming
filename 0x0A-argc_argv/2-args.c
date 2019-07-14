#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 * @argc: counter of parameters
 * @argv: array of pointers
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
