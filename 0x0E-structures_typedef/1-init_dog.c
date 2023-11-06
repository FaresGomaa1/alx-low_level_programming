#include "dog.h"
#include <stddef.h>
/**
* init_dog - Initializes a struct dog
* @d: A pointer to a struct dog
* @name: The name of the dog
* @age: The age of the dog
* @owner: The owner of the dog
*
* Description: This function initializes a struct dog with the provided name,
* age, and owner. It handles the case when 'd' is a NULL pointer.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
