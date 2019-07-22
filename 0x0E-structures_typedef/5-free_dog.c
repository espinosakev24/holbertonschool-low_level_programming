#include "dog.h"
#include <stdio.h>
/**
 * free_dog - function that free memory of a struct;
 * @d: pointer to the values of dog struct
 * Return: Always 0.
 */
void free_dog(dog_t *d);
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
}
