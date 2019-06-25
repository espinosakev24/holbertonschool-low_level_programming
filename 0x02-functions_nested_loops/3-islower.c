#include "holberton.h"
/**
* _islower -  check the code for Holberton School students.
* @c: lower case
* Return: Always 1 or 0
*/
int _islower(int c)
{

	if ((c <= 122) && (c >= 97))
	{
		return (1);
	}

	return (0);
}
