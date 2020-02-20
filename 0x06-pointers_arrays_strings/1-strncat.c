/**
  * _strncat - Concatenates two strings
  * @dest: string 1
  * @src: string to append
  * @n: number of n bytes from src
  * Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len;
	int src_len;
	int i;

	dest_len = src_len = 0;
	/*Knowing size of each string*/
	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
