#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - a function that frees memory allocated for a dog structure
 * @d: pointer to the dog structure to be freed
 * Return: none
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
