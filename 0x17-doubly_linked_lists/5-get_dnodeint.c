#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointed to the doubly linked list.
 * @index: the position in the doubly linked list.
 *
 * Return: nth node of a doubly linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head != NULL)
	{
		if (index == count)
		{
			return (head);
		}
		count++;
		head = head->next;
	}
	return (NULL);
}
