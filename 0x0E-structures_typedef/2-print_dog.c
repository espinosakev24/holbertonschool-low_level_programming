#include "dog.h"
#include <stdio.h>
/**
 * print_dog - printing all the variables of dog struct.
 * @d: pointer to the space in memory of dog struct
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	else
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}

		printf("Age: %f\n", d->age);

		if (d->owner == NULL)
		{
			printf("Owner: (nil)");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
