#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print alphabets in small letters
 *
 * Return : Always 0
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}



