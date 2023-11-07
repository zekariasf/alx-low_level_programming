#include"dog.h"
#include<stdio.h>
/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: struct variable
 * @name: name argument
 * @age: age argument
 * @owner: owner argument
 *
 * Return: nothing.
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
