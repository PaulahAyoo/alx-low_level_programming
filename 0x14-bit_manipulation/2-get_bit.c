#include <stdio.h>

/**
*get_bit - returns the value of a bit at a given index
*@n: bit
*@index: index to get value at - starts at 0
*
*Return: if error occurs -1
*	else value at bit of index
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
