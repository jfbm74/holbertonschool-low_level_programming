#include <stdio.h>
/**
 * _strstr - function that locates a substring
 * @haystack: given string
 * @needle: string to locate
 * Return: pointer tu string
 **/
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int size_n;
	int acu;

	i = j = size_n = acu = 0;
	for (size_n = 0;  needle[size_n] != '\0'; size_n++)
	{}
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; j < size_n; j++)
			{
				if (haystack[i + j] == needle[j])
				{
					acu++;
					continue;
				}
				else
				{
					acu = 0;
					break;
				}
			}
			if (acu == size_n)
				break;
		}
		i++;
	}
	if (acu == size_n)
		return (haystack + i);
	else
		return (needle + size_n);
}
