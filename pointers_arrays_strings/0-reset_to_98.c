#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - Updates the value of the integer it points to 98.
 * @n: Pointer to an integer.
 *
 * Description: This function takes a pointer to an int and updates
 * the value stored at the memory address it points to, setting it to 98.
 */
void reset_to_98(int *n)
{
	*n = 98;
}
