/**
* rev_string - Print a string in rev
* @s: String to print
*
* Return: nothing
*/

void rev_string(char *s)
{
	int i;
	char tmp;
	int j;

	/* Length of string s*/
	for  (i = 0; s[i] != 0 ; i++);
	i--;
	/* Swaping values of s*/
	for (j = 0 ; j < i ; j++, i--)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] =  tmp;
	}
}
