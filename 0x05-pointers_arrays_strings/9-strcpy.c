/**
 *
 *
 *
 *
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int j;
	
	i = j = 0;
	for (i = 0; src[i] !='\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i + 1]= '\0';
	return (dest);
}
