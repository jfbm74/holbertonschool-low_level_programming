/**
 * main - prints a quote
 * Return: 1
 */
int main(void)
{
	char *c = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		write(1, &c[i], 1);
	}
	return (1);
}
