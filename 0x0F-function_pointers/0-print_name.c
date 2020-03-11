#include "function_pointers.h"
/**
 * print_name - unction that prints a name
 * @name: given name
 * @f: Pointer to function print_name
 * Return: Nohing
 */
void print_name(char *name, void (*f)(char *))
{
		f(name);
}
