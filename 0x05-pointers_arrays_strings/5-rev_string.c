/**
* rev_string - Print a string in rev
* @s: String to print
*
* Return: nothing
*/

void rev_string(char *s)
{
	int len;
	int i;
	int j;
	char tmp;

	len = 0;
	while (s[len] != 0)
	{
		len++;
	}
	len = len - 1;
	for (i = 0 ; i < j ; i++)
	{
		for (j = len ; j > i ; j--)
		{
			tmp = s[j];
			s[j] = s[i];
			s[i] = tmp;
		}
	}
}
