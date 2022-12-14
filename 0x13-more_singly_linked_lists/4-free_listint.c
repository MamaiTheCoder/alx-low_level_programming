#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 *
 * @head: the head to the list
 *
 * Return: Void.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
