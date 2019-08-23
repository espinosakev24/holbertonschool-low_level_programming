#include<stdio.h>
#include "holberton.h"
/**
 * print_env - function that print the env variables
 * Return: void;
 */
void print_env(void) 
{
	int i = 1;
	char *s = *environ;

	for (; s; i++)
	{
		printf("%s\n", s);
		s = *(environ+i);
	}
}
