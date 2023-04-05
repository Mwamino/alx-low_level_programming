#include "main.h"

/**
 *  wildcmp - compares 2 strings
 *  @s1: string 1
 *  @s2: string 2
 *  Return: 1 if identical,0 if otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (strcmp(s1, s2) == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
