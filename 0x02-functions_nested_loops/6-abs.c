#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 * @r: input character
 *
 * Return: Absolut value of number r
 */

int _abs(int r)
{
	if (r < 0)
	{
		return (-r);
	}
	else
	{
		return (r);
	}
}
