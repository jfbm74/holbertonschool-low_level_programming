/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: given string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (*s != '\0')
	{
		len++;
		len = len + _strlen_recursion(s + len);
		return (len);
	}
	else
		return (0);
}
