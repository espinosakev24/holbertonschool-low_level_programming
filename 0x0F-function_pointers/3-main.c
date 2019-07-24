#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - function main that add two numbers
 * @argc: amount of arguments
 * @argv: pointer to the arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int x;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((strcmp(argv[2], "+") && strcmp(argv[2], "-") && strcmp(argv[2], "/")
	&& strcmp(argv[2], "%") && strcmp(argv[2], "*")))
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(argv[2], "%") || strcmp(argv[2], "/")) && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	x = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", x);
	return (0);
}
