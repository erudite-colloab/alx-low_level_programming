#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * This program prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low, upper;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	for (upper = 'A'; upper <= 'Z'; upper++)
		putchar(upper);
	putchar('\n');

	return (0);
}
