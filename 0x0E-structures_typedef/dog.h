#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure type containing django datas.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog's owner
 * Return: Always 0.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *_strncpy(char *dest, char *src, int n);
#endif
