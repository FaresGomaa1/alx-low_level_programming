#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog structure
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 * Return: A pointer to the newly created dog,
 *	or NULL if memory allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
	return (NULL);


new_dog->name = strdup(name);
if (new_dog->name == NULL)
{
	free(new_dog);
	return (NULL);
}

new_dog->age = age;

new_dog->owner = strdup(owner);
if (new_dog->owner == NULL)
{
	free(new_dog->name);
	free(new_dog);
	return (NULL);
}

return (new_dog);
}
