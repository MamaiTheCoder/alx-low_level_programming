#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h:Pointer to the first node in doubly linked list
 *
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t number_of_nodes = 0;

	if (h == NULL)
	{
		return (number_of_nodes);
	}

	while (h->prev != NULL)
	{
		h = h->prev;
	}

	do {
		printf("%d\n", h->n);
		number_of_nodes++;
		h = h->next;
	} while (h->next != NULL);

	return (number_of_nodes);
}
