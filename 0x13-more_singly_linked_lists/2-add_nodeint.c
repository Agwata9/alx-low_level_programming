#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - add not at start
 * Return: pointer to node
 * @head: head node
 * @n: new node data
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (!head)
		return (0);
	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (0);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
