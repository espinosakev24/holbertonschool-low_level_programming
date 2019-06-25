#include "holberton.h"
/**
 * _isalpha - check the code for Holberton School students.
 * @c: upper or lowercase
 * Return: Always lower or uppercase letter.
 */
int _isalpha(int c)
{
	if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)))
	{
	return (1);
	}
	return (0);
}
