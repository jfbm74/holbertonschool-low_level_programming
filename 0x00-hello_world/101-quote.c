/**
 * main - prints a quote
 * Return: 1
 */
int main(void)
{
	int i;

	i= sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", i);
	return (1);
}
