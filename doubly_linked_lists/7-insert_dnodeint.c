#include "lists.h"


/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Double pointer to the head of the list
 * @idx: Index where the new node should be inserted
 * @n: Data for the new node
 * Return: Address of the new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *newnode, *temp = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (temp != NULL)
	{
		if (i == idx - 1)
		{
			if (temp->next == NULL)
				return (add_dnodeint_end(h, n));

			newnode = malloc(sizeof(dlistint_t));
			if (newnode == NULL)
				return (NULL);

			newnode->n = n;
			newnode->prev = temp;
			newnode->next = temp->next;
			temp->next->prev = newnode;
			temp->next = newnode;

			return (newnode);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
