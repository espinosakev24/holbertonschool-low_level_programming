#include <stdio.h>
#include <stdlib.h>
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc (sizeof(struct dog));
	struct dog d;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Django", 3.5, "Jay");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
