#include <stdio.h>

/**
 * main - prints name of file that program
 *        was compiled from, followed by a new line
 *
 * Return: always 0.
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
