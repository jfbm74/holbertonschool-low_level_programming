/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: target string
 * @src: source string
 * Return: string pointing to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
