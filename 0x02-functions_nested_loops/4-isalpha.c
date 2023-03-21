#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: An input character
 *
 * Return: 1 if uppercase or 0 in lowercase
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return  (0);
	}
}
