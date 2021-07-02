#include "holberton.h"

/**
 * reverse_array - function
 * @a: parameter
 * @n: parameter
*/
void reverse_array(int *a, int n)
{
	int idx, len, buf;

	for (idx = 0, len = n - 1 ; idx < len ; idx++, len--)
	{
		buf = a[idx];
		a[idx] = a[len];
		a[len] = buf;
	}
}
