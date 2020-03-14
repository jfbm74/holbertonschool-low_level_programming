#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct pf - Struct printing functions
 *
 * @fmt: format
 * @f: function printing associated
 */
typedef struct pf
{
	char *fmt;
	void (*f)(va_list);
} prtfn;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif /**VARIADIC_FUNCTIONS_H*/
