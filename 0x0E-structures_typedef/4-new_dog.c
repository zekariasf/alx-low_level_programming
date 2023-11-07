#include<stdlib.h>
#include "dog.h"

int _strlen(char *c);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - function that creates new dog
 * @name: name parameter
 * @age: age parameter
 * @owner: owner parameter
 *
 * Return: Nothing
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_new;
	int d_name = 0, d_own = 0;

	if (name != NULL && owner != NULL)
	{
		d_name = _strlen(name) + 1;
		d_own = _strlen(owner) + 1;
		dog_new = malloc(sizeof(dog_t));

		if (dog_new == NULL)
			return (NULL);
		dog_new->name = malloc(sizeof(char) * d_name);
		if (dog_new->name == NULL)
		{
			free(dog_new);
			return (NULL);
		}

		dog_new->owner = malloc(sizeof(char) * d_own);

		if (dog_new->owner == NULL)
		{
			free(dog_new);
			return (NULL);
		}

		dog_new->name = _strcpy(dog_new->name, name);
		dog_new->owner = _strcpy(dog_new->owner, owner);
		dog_new->age = age;
	}
	return (dog_new);
}
/**
  * _strlen - Returns the length of a string
  * @c: String to count
  *
  * Return: String length
  */
int _strlen(char *c)
{
	int x = 0;

	for (; *c != '\0'; c++)
	{
		x++;
	}

	return (x);
}

/**
  * _strcpy - Copy a string
  * @dest: Destination value
  * @src: Source value
  *
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}

