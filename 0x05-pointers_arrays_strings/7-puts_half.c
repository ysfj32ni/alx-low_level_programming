/**
 * puts_half - Entry Function
 * @str: char
 */

void puts_half(char *str)
{
	int index, half;

	index = 0;
	while (str[index] != '\0')
		index++;

	half = index / 2;
	if (index % 2 == 1)
		half++;
	while (half < index)
	{
		write(1, str[half], 1);
		half++;
	}
	write(1, '\n', 1);
}
