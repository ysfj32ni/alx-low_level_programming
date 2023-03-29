/**
 * _atoi - Entry Function
 * @str: string
 * Return: n*minus (Success)
 */

 int _atoi(char *s)
{
	int	n;
	int	minus;

	minus = 1;
	n = 0;
	while (*s == 32 || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			minus = -1;
		s++;
	}
	while (*s && *s >= '0' && *s <= '9')
	{
		n = n * 10 + (*s - 48);
		s++;
	}
	return (n * minus);
}
