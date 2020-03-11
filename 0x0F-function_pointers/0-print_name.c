#include <stdlib.h>
/**
 * print_name - unction that prints a name
 * @name: given name
 * @f: Pointer to function print_name
 * Return: Nohing
 */
void print_name(char *name, void (*f)(char *))
{
	if ((name != NULL) && (f != NULL))
	{
		f(name);
	}
	else
	{
		return (NULL);
	}
}
