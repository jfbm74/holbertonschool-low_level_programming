/**
 * _strcmp - Compare two strings, output int based on comparison
 * @s1: First string to compare
 * @s2: Second string to compare
 *
 * Return: Int -1 if s1 shorter, +1 if s1 is longer, 0 if equal
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, k;

	i = j = k = 0;
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	while (s2[j] != '\0')
	{
		j++;
	}
	while (s1[k] != '\0' || s2[k] != '\0')
	{
		if (s1[k] != s2[k])
		{
			return (s1[k] - s2[k]);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
