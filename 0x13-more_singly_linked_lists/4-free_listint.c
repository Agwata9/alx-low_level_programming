#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees a list
 * @head: head node
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
