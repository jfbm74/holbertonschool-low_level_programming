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
	int lname;
	int lowner;
	int i;

	for (lname = 0; name[lname] != '\0'; lname++)
		;
	for (lowner = 0; name[lowner] != '\0'; lowner++)
		;
	copito = malloc(sizeof(dog_t));
	if (copito == NULL)
		return (NULL);

	copito->name =  malloc(sizeof(lname + 1));
	if (copito->name == NULL)
	{
		free(copito);
		return (NULL);
	}
	copito->owner = malloc(sizeof(lowner + 1));
	if (copito->owner == NULL)
	{
		free(copito->name);
		free(copito);
		return (NULL);
	}
	for (i = 0; i < lname + 1; i++)
		copito->name[i] = name[i];
	copito->name[i] = '\0';
	for (i = 0; i < lowner + 1; i++)
		copito->owner[i] = owner[i];
	copito->owner[i] = '\0';
	copito->age = age;
	return (copito);
}
