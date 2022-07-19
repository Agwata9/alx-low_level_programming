#include <stdio.h>
#include "lists.h"
/**
 * listint_len - get len of list
 * Return: size_t
 * @h: list
 */
size_t listint_len(const listint_t *h)
{
	listint_t *ptr;
	int len = 0;
	
	if (ptr==NULL)
		return (0);

	while (ptr != NULL)
	{
		len++;
		ptr = ptr->next;
	}
	return (len);
}
