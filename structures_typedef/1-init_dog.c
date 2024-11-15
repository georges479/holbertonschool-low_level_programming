#include "dog.h"
#include <stdio.h>


/**
 * init_dog - a function that initializes a variable of type struct dog
 * @d: pointer to the dog struct to initialize
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
