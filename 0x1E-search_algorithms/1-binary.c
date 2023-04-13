#include "search_algos.h"

/**
 * binary_search - searches for a value in a
 * sorted array of integers using the Binary search algorithm.
 *
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 *
 * Return: index where value is located.
 * -1 If value is not present in array or if array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, mid, i;

	if (array == NULL || size == 0)
		return (-1);

	while (left <= right)
	{
		mid = (left + right) / 2;

		printf("Searching in the subarray: ");

		for (i = left; i <= right; i++)
			printf("%s %d", (i == left) ? ":" : ",", array[i]);

		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		} else if (array[mid] < value)
		{
			left = mid + 1;
		} else
		{
			right = mid - 1;
		}
	}
	return (-1);
}
