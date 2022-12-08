#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to pointer to doubly linked list
 * @n: data to be added at the end of the list
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp;

	temp = *head;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = 0;
	newnode->next = 0;

	if (temp != NULL)
	{
		while (temp->next != 0)
			temp = temp->next;
		temp->next = newnode;
	}
	else
	{
		*head = newnode;
	}

	newnode->prev = temp;
	return (newnode);
}
