#include"main.h"
#include<stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: number of bytes to be allocated.
 *
 * Return: a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *memry = malloc(b);

	if (memry == NULL)
		exit(98);

	return (memry);
}
