#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 *
 * @array: pointer to array
 * @size: size of the array
 * @action: pointer function
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
