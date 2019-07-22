#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - Setting information of django.
 * @d: pointer to the struct variable
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owener of the dog
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d->name = name;
	d->age = age;
	d->owner = owner;
}
