#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_iterator -  function that executes a function given
 * as a parameter on each element of an array
 * @array: array
 * @size: size for arr
 * @action:pointr to func to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
