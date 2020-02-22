#include <stdio.h>
/**
 *
 *
 *
 */
char *rot13(char *s)
{
	int i;
	int j;
	char ltr[]   = {"aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ"};
	char ltr13[] = {"nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM"};

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; j <= 52; j++)
		{
			if (s[i] == ltr[j])
			{
				s[i] = ltr13[j];
			 	printf("value for  i=%d j=%d s[i]=%c ltr[j]=%c lter13[j]=%c\n", i, j, s[i], ltr[j], ltr13[j] );
			}
		}

		i++;
	}
	return (s);
}
