/**
 *printf_number - Entry Function
 *@n: String
 */
void	ft_putchar(char n)
{
	write(1, &n, 1);
}
void print_number(int n)
{
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar (n + 48);
}
