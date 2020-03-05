#include <stdlib.h>
/**
 * _strlen - length of string
 * @s: given string
 * Return: len
 */
int _strlen(char *s)
{
	int i;

	if (s == NULL)
	{
		return (0);
	}
	else
	{
		for (i = 0; s[i] != '\0'; i++)
		;
		return (i);
	}
}
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string dest
 * @s2: string to add
 * @n: size of positions to replace
 * Return: String contatenated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int ls1;
	int ls2;
	char *str;
	int i;
	int j;

	if (s1 == NULL)
		return (NULL);
	ls1 = _strlen(s1);
	ls2 = _strlen(s2);
	if ((int)n >= ls2)
		n = ls2;
	str = malloc((ls1 + n + 1) * sizeof(int));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ls1 ; i++)
		str[i] = s1[i];
	for (j = 0; j < (int)n ; j++)
		str[i + j] = s2[j];
	str[i + j] = '\0';
	return (str);
}
