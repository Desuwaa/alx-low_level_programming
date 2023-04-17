#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - creates a variableoftype struct dog
 * @d: pointer to the element of type dog
 * @name: pointer to a char for name dog
 * @age: dog's age
 * @owner: pointer to a char for owner dog
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		;
	}

	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
