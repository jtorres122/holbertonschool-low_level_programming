#include "holberton.h"

/**
 * _abs - function that computes absolute value
 * @r: parameter
 * Return: r
 */
int _abs(int r)
{
	if (r < 0)
	{
		r = (-1) * r;
	}
	return (r);
}
