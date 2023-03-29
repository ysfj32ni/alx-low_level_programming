/**
 * swap_int - Entry Function
 * swap the value of a and b
 *@a : integer
 *@b : integer
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = *tmp;
}
