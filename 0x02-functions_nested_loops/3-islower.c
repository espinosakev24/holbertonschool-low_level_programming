#include "holberton.h"
int _islower(int c)
{

	if((c <= 122) && (c >= 97))
	{
		return (1);
	}

	return (0);
}
