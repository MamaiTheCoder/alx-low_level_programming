#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: points to the first node of the list
 * @str: the str
 *
 * Return: address of the new element
 * NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t nchar;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;
	new->len = nchar;
	new->next = *head;
	*head = new;
	return (*head);

}
