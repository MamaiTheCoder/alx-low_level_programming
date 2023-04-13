#include "search_algos.h"

/**
 * binr_search - searches for a value in an array of
 * integers using the Binary search algorithm.
 *
 * @array: input array.
 * @size: size of the array.
 * @value: value to search in.
 * Return: index of the number
 */
int binr_search(int *array, size_t size, int value)
{
	size_t i, half = size / 2;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
	{
		if (half > 0)
			return (binr_search(array, half + 1, value));
		return ((int)half);
	}

	if (value < array[half])
		return (binr_search(array, half + 1, value));

	half++;
	return (binr_search(array + half, size - half, value) + half);
}
/**
 * advanced_binary - searches for a value in a sorted array of integers.
 *
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 *
 * Return: The index where value is located.
 * -1 If value is not present in array or if array is NULL.
 */
int advanced_binary(int *array, size_t size, int value)
{
	int idx;

	idx = binr_search(array, size, value);

	if (idx >= 0 && array[idx] != value)
		return (-1);

	return (idx);
}
