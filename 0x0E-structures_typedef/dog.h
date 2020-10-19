#ifndef DOG_H
#define DOG_H
/**
 * struct dog - A struct containing a dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the dog's owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _putchar(char c);
void free_dog(dog_t *d);
#include <stdio.h>
#endif
