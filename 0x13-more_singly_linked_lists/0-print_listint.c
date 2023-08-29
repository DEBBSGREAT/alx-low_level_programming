#include "lists.h"

/**
 * Print_listint - Printed all the elements of the linked list
 * @h: linked list of the type listint_t to be print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
