#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - function which frees all dogs
  * @d: pointer argument to dogs
  *
  * Return: Nothing
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
