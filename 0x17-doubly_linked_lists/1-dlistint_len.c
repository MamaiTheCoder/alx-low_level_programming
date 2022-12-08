#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer to doubly linked list
 *
 * Return: Number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int number_of_elements = 0;

	if (h == NULL)
	{
		return (number_of_elements);
	}

	while (h->prev != NULL)
	{
		h = h->prev;
	}

	while (h->next != NULL)
	{
		number_of_elements++;
		h = h->next;
	}
	return (number_of_elements);
}
