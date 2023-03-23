/**
 * main - print to the standard error .
 *
 * Return:  0 (Success)
 */

#include <unistd.h>

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(2, str, 57);
	write(2, "\n", 1);
	return (0);
}

