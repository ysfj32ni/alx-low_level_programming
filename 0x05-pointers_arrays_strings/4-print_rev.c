/**
  * print_rev - Prints a string in reverse
  * @s: The string to print
  *
  * Return: void
  */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i > 0)
	{
		i--;
		write(1, &s[i], 1);
	}
	write(1, '\n', 1);
}
