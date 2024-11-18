#include "function_pointers.h"


/**
 * print_name - Prints a name using a given function pointer.
 * @name: The name to be printed.
 * @f: A pointer to the function used for printing.
 *
 * Description: This function checks if the pointers are valid and
 *              calls the function `f` to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
