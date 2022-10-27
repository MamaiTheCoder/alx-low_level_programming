#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list, 
 * and returns the head node’s data (n).
 *
 * @head: the head to the list
 *
 * Return: head node's data.
 * 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	int head_node;
	listint_t *h;
	listint_t *current;

	if (*head == NULL)
	{
		return (0);
	}
	current = *head;
	head_node = current->n;
	h = current->next;
	free(current);
	*head = h;
	return (head_node);
}
