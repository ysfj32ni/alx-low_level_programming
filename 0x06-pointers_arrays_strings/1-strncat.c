/**
 *_strncat - entry Function
 *@dest: string
 *@src: string
 *@n: integer
 *Return: dest (Success)
 */

char *_strncat(char *dest, char *src, int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		++i;
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		++j;
	}
	dest[i + j] = '\0';
	return (dest);
}
