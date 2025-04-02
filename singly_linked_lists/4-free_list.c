#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: Pointer to the first node of the list
 *
 * Description: This function frees all nodes in a list_t linked list,
 * including the strings stored in each node.
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
