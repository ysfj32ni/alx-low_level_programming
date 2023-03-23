
#include <unistd.h>
#include <stdio.h>

/**
 * main - print to the standard error .
 *
 * Return:  1 (Success)
 */

int main(void)
{
	fputs("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"
			, stderr);
	return (1);
}

