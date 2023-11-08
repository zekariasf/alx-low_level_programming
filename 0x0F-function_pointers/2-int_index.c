#include "function_pointers.h"
/**
 * int_index - this functions find the index of a int
 *@array: the array to find the index
 *@size: the size of the array
 *@cmp: this a function pointer.
 *Return: nothing
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (x = 0; x < size; x++)
	{
		if (cmp(*(array + x)))
			return (x);
	}

	return (-1);
}
