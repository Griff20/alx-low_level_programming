/**
 * swap_int - Replaces integer value with another
 * @a - integer pointer
 * @b - integer pointer
 *@m- integer
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *b;
	*b = *a;
	m = *a;
}
