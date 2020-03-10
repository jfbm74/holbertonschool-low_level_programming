#include <stdlib.h>
#include "dog.h"
/**
 * _strcpy - Copy the given string
 * @dest: Location to copy string to
 * @src: String to copy to given location
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != 0)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
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
	char *new_name;
	char *new_owner;

	for (lname = 0; name[lname] != '\0'; lname++)
		;
	for (lowner = 0; name[lowner] != '\0'; lowner++)
		;
	copito = malloc(sizeof(dog_t));
	if (copito == NULL)
		return (NULL);

	new_name =  malloc(sizeof(lname + 1));
	if (new_name == NULL)
	{
		free(copito);
		return (NULL);
	}
	new_owner = malloc(sizeof(lowner + 1));
	if (new_owner == NULL)
	{
		free(new_name);
		free(copito);
		return (NULL);
	}
	_strcpy(new_name, name);
	_strcpy(new_owner, owner);
	copito->name = new_name;
	copito->owner = new_owner;
	copito->age = age;
	return (copito);
}
