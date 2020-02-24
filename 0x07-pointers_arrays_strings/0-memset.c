/**
 * _memset - function that fill memory with a constant type
 * @s: given string
 * @b: given char to fill
 * @n: given integer to print n times
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i <= n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
