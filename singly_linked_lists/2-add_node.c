#include "lists.h"
#include <string.h>
#include <stdlib.h>


/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Double pointer to the head of the list.
 * @str: String to be duplicated and added as the value of the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *str2;

	str2 = malloc(sizeof(list_t));

	if (str2 == NULL)
	{
		return (NULL);
	}

	str2->str = strdup(str);
	if (str2->str == NULL)
	{
		free(str2);
		return (NULL);
	}

	str2->len = strlen(str);
	str2->next = *head;
	*head = str2;
	return (str2);
}

