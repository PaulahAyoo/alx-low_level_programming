#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_name - prints name
 * @name: name to be printed
 * @f: pointer to a function that prints name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
