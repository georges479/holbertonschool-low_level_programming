#include "function_pointers.h"

/**
 * print_name - Function that prints a name using a given function0.
 *
 * @name: Pointer to a string representing the name to be printed.
 * @f: Pointer to a function that takes a char pointer as an argument
 * and returns void.
 *
 * Description: This function receives a name and a function pointer,
 * and it uses the provided function to handle the name.
 * The behavior of the function depends on the function passed.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
