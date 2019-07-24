#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - function that free memory of a struct;
 * @d: pointer to the values of dog struct
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
