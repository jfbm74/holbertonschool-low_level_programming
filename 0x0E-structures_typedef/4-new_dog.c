#include <stdlib.h>
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
	
	for (lname = 0; name[lname] != '\0'; lname++)
		;
	for (lowner = 0; name[lowner] != '\0'; lowner++)
		;
	copito = malloc(sizeof(dog_t));
	if (copito == NULL)
		return (NULL);

	copito->name =  malloc(sizeof(lname + 1));
	if (copito->name == NULL)
		return (NULL);
	copito->owner = malloc(sizeof(lowner + 1));
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
