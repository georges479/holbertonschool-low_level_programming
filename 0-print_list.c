#include "lists.h"
#include <stdio.h>


/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
        const list_t *current = h; /* Pointer to traverse the list */
        size_t hcount = 0; /* Counter for the number of nodes */

        while (current != NULL) /* Loop through the list */
        {
                if (current->str == NULL) /* If the string is NULL */
                {
                        printf("[0] (nil)\n");
                }
                else
                {
                        printf("[%u] %s\n", current->len, current->str);
                }
                hcount++; /* Increment the node count */
                current = current->next; /* Move to the next node */
        }
        return (hcount); /* Return the total number of nodes */
}
