/**
 * cap_string - a function that capitalizes
 *		all words of a string
 *
 * @str: pointer to char input array
 *
 * Return: @str
 */
char *cap_string(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	i = 0;
	if (str[0] != '\0' && str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i++;
	while (str[i - 1] != '\0')
	{
		if (str[i - 1] < 'a' || str[i - 1] > 'z')
			if (str[i - 1] < 'A' || str[i - 1] > 'Z')
				if (str[i - 1] < '0' || str[i - 1] > '9')
					if (str[i] >= 'a' && str[i] <= 'z')
						str[i] -= 32;
		i++;
	}
	return (str);
}
