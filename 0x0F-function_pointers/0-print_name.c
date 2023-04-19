#include "function_pointers.h"

/**
 * print_name - Function that prints a name
 * @name: NAme to be printed
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
