#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strcpy - check the code for Holberton School students.
 * @dest: hello
 * @src: world!
 * Return: Always dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * _strlen - check the code for Holberton School students.
 * @s: pointer to holberton
 * Return: Always n.
 */
int _strlen(char *s)
{
	int n;

	n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	return (n);
}
/**
 * new_dog - check the code for Holberton School students.
 * @name: name to cpy
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len_n, len_o;
	char *nname, *nowner;

	dog_t *ndog;

	len_n = _strlen(name);
	len_o = _strlen(owner);

	ndog = malloc(sizeof(dog_t));
	if (!ndog)
		return (0);
	nname = malloc(sizeof(char) * (len_n + 1));
	if (nname == 0)
	{
		free(nname);
		free(ndog);
		return (NULL);

	}
	nowner = malloc(sizeof(char) * (len_o + 1));
	if (nowner == 0)
	{
		free(nowner);
		free(nname);
		free(ndog);
		return (NULL);
	}
	nname = _strcpy(nname, name);
	nowner = _strcpy(nowner, owner);
	ndog->name = nname;
	ndog->age = age;
	ndog->owner = nowner;
	return (ndog);
}
