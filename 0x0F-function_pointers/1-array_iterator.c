#include "function_pointers.h"
/**
 * array_iterator - function that executes a function as an array
 * @array: array argument
 * @size: size of array argument
 * @action: function pointer
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array && size && action)
	{
		for (x = 0; x < size; x++)
			action(*(array + x));
	}
}
