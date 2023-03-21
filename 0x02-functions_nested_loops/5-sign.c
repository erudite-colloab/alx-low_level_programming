#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 * @n: An input number
 * Return: 1 if number is postive, o if number is 0,
 * or -1 if number is neagative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
