#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - Function creates a new dog.
 * @name: puppys name
 * @age: puppys age
 * @owner: puppys owner
 * Return: new struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *copito;
	int lname, lowner;

	lname = strlen(name);
	lowner = strlen(owner);

	copito = malloc(sizeof(dog_t));
	if (copito == NULL)
		return (NULL);

	copito->name =  malloc(sizeof(lname));
	if (copito->name == NULL)
		return (NULL);
	copito->owner = malloc(sizeof(lowner));
	if (copito->owner == NULL)
	{
		free(copito->name);
		return (NULL);
	}
	copito->name = name;
	copito->owner = owner;
	copito->age = age;
	return (copito);
}
