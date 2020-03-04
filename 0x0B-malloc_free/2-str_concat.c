#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: array
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int s_s1 = 0;
	int s_s2 = 0;
	char *dest;

	/**size of  s1,s2*/
	for (s_s1 = 0; s1[s_s1] != '\0'; s_s1++)
		;
	for (s_s2 = 0; s2[s_s2] != '\0'; s_s2++)
		;
	s_s2++;
	/* creating array dest */
	dest =  malloc((s_s1 + s_s2) * sizeof(char));
	if (!dest)
	{
		return (NULL);
	}
	else
	{
		/*concatenating strings s1,s2 into dest*/
		for (i = 0; i < (s_s1 + s_s2); i++)
		{
			if (i < s_s1)
			{
				dest[i] = s1[i];
			}
			else if (i >= s_s1 && i < (s_s1 + s_s2))
			{
				dest[i] = s2[i - s_s1];
			}
		}
		dest[i] = '\0';
	}
	return (dest);
	free(dest);
}
