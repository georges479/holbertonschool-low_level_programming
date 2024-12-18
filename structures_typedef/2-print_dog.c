#include "dog.h"
#include <stdio.h>


/**
 * print_dog - Prints the elements of a struct dog.
 * @d: Pointer to the struct dog to print.
 *
 * Description: Prints the name, age, and owner of a struct dog.
 * If any member is NULL, prints "(nil)" for that member.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	 printf("Age: %f\n", d->age);

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		 printf("Owner: %s\n", d->owner);
	}
}
