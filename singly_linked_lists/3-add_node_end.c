#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Pointer to the first node of the list
 * @str: String to duplicate and store in the new node
 *
 * Return: Address of the new node, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	char *copie;
	int length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	copie = malloc(sizeof(char) * (length + 1));
	if (copie == NULL)
		return (NULL);

	for (length = 0; str[length] != '\0'; length++)
	{
		copie[length] = str[length];
		copie[length] = '\0';
	}

	new->str = copie;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;
	return (new);
}
