#include <stdio.h>
/**
 * rot13 - Functions that encodes a string to ROT13
 * @s : given string
 * Return: string encoded
 */
char *rot13(char *s)
{
	int i;
	int j;
	char ltr[]   = {"aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ"};
	char ltr13[] = {"nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM"};

	i = j = 0;
	while (s[i] != '\0')
	{
		for (j = 0; j <= 52 ; j++)
			if (s[i] == ltr[j])
			{
				s[i] = ltr13[j];
				break;
			}
		i++;
	}
	return (s);
}
