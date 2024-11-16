#include <stddef.h>
#include "dog.h"
/**
 * init_dog - Initialize a dog structure.
 * @d: Pointer to the struct dog to initialize.
 * @name: The name of the dog.
 * @age: The age ao th dog.
 * @owner: The owner of the dog.
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
