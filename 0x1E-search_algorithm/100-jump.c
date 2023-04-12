#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted
 * array of integers using the Jump search algorithm.
 *
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for
 *
 * Return: first index where value is located.
 * -1 If value is not present in array or if array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	int idx, end, i, start;

	if (array == NULL || size == 0)
		return (-1);

	end = (int)sqrt((double)size);
	i = 0;
	start = idx = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);

		if (array[idx] == value)
			return (idx);
		i++;
		start = idx;
		idx = i * end;
	} while (idx < (int)size && array[idx] < value);

	printf("Value found between indexes [%d] and [%d]\n", start, idx);

	for (; start <= idx && start < (int)size; start++)
	{
		printf("Value checked array[%d] = [%d]\n", start, array[start]);
		if (array[start] == value)
			return (start);
	}

	return (-1);
}
