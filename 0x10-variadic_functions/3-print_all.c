#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * p_to_c - function that prints character
 * @c: element type char
 * Return: nothing
*/
void p_to_c(va_list c)
{
	printf("%c", va_arg(c, int));
}
/**
 * p_to_i - function that prints integers
 * @num: element type integer
 * Return: nothing
*/
void p_to_i(va_list num)
{
	printf("%d", va_arg(num, int));
}
/**
 * p_to_f - function that prints float num
 * @num: element type float
 * Return: nothing
*/
void p_to_f(va_list num)
{
	printf("%f", va_arg(num, double));
}
/**
 * p_to_s - function that prints string
 * @s: element type string
 * Return: nothing
*/
void p_to_s(va_list s)
{
	printf("%s", va_arg(s, char *));
}
/**
 * print_all - function that prints all arguments
 * @format: format to print
 * Return: nothing
*/
void print_all(const char * const format, ...)
{
	void *ptr();
	unsigned int i = 0;
	unsigned int j = 0;
	prtfn p[] = {
		{"c", p_to_c},
		{"s", p_to_s},
		{"i", p_to_i},
		{"f", p_to_f},
		{NULL, NULL}
	};
	va_list argptr;

	va_start(argptr, format);
	while (format[i])
	{
		j = 0;
		while (p[j].fmt)
		{
			if (format[i] == *p[j].fmt)
			{
				p[j].f(argptr);

			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(argptr);
}
