/**
 * _strcat - Print a string in rev
 * @dest: String
 * @src: String to append
 * Return: nothing
 */
char *_strcat(char *dest, char *src)
{
	int l_dest;
	int l_src;
	int i;

	l_dest =  l_src = 0;
	while (dest[l_dest] != '\0')
		l_dest++;
	while (src[l_src] != '\0')
		l_src++;
	i = l_src;
	l_src = 0;
	while (l_src < i)
	{
		dest[l_dest] = src[l_src];
		l_dest++;
		l_src++;
	}
	return (dest);
}
