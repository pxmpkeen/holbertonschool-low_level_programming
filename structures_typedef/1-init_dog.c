#include "dog.h"
/**
 * init_dog - initializes a dog
 * @dog: struct dog
 * @name: dog.name
 * @age: dog.age
 * @owner: dog.owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
