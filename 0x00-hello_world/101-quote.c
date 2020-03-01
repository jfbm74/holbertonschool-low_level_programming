/**
 * main - prints a quote
 * Return: 1
 */
int main(void)
{
	char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		putchar(s[i]);
	}
	return (1);
}
