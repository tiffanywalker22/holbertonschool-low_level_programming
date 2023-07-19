#include "lists.h"
/**
 * add_dnodeint_end - add a node at the end of a list
 * @head: pointer to the head of list
 * @n: node data
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (temp->next)
			temp = temp->next;
		new->prev = temp;
		temp->next = new;
	}
	return (new);
}
