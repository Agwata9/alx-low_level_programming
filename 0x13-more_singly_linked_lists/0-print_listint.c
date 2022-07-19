#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - Function that prints all elements in a linked list
 **
 * @h : the list head pointer
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
	listint_t *ptr = h;
	int  count = 0;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->value);
		count++;
	}
	return (count);
}

