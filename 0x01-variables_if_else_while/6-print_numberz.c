#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * prints all single digit numbers of base 10
 * starting from 0  using  putchar
 *
 * Return: Always  0
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
