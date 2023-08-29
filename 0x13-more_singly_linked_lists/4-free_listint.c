#include "lists.h"

/**
 * Free_listint - Frees the linked list
 * @head: listint_t list to be Freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
