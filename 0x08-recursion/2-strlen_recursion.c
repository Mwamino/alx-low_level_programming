#include "main.h"

/**
 * int _strlen_recursion - a function that returns the length of a string
 * @s: value of a string
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count++;
		count = count + _strlen_recursion(s + 1);
	}
	return (count);
}
