#include"main.h"
#include<stdlib.h>
/**
 * create_array - function that create an array of chars and intializes char
 * @size: size of array
 * @c: char to assign
 *
 * Return: null if size 0, a pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * size);
	if (size == 0 || arr == NULL)
		return (NULL);

	for (i = 0; i <size; i++)
		arr[i] = c;
	return(arr);
}
