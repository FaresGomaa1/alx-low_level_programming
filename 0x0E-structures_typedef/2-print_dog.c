#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the information in a struct dog
 * @d: A pointer to a struct dog
 *
 * Description: This function prints the information about a dog, including
 * its name, age, and owner. If an element of 'd' is NULL, it prints "(nil)"
 * instead of the NULL value.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
