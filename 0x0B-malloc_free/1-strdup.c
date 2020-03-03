#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: given string
 * Return: new string copy of str
 */
char *_strdup(char *str)
{
	int i;
	int s_str;
	char *copy;

	i = s_str = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		s_str++;
		i++;
	}
	s_str++;
	copy = malloc(s_str * sizeof(char));
	if (copy == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (i < s_str)
		{
			copy[i] = str[i];
			i++;
		}
	}
	copy[i] = '\0';
	return (copy);
	free(copy);
}
