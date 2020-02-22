#include <stdio.h>
/**
 * leet- Function that encodes a string into  1337
 * @s: given string
 * Return: string 1337 encoded
 */
char *leet(char *s)
{
	int i;
	int j;
	char l[] = {"aAeEoOtTlL"};
	char n[] = {"4433007711"};

	i = 0;
	while(s[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == l[j])
				s[i] = n[j];
		}
		i++;
	}
	return (s);
}
