/**
 * _puts - Entry Function
 * @str: string
 */

void _puts(char *str)
{
	int	i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
