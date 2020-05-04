/**
 * _atoi - function that convert a string to an integer.
 * @s: given string
 * Return:  integer
 */
int _atoi(char *s)
{
	int i;
	int x;
	int sign;
	int j;

	i = j = x = 0;
	sign = 1;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign = sign * -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0'  && s[i] <= '9')
			{
				x = ((x * 10) + s[i] - 48);
				i++;
			}
			x = sign * x;
			return (x);
		}
		i++;
	}
	x = sign * x;
	return (x);
}
