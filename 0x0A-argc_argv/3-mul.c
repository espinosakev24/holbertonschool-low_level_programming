#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	argc = ((argc + 1) * (argc + 2));
	printf("%d\n", argc);
}
