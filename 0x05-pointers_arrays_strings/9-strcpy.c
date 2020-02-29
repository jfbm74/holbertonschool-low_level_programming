/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: target string
 * @src: source string
 * Return: string pointing to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	i = j = 0;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i + 1] = '\0';
	return (dest);
}
