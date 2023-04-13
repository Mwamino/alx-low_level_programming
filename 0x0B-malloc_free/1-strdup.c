#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * , which contains a copy of the string given as a parameter
 * @str:string value
 * Return:pointer to duplicate string,NULL if insufficient memory
 */

char *_strdup(char *str)
{
	char *c;
	int i;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		j++;
	}
	c = malloc(sizeof(char) * (j + 1));
	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		c[i] = str[i];
	}
	c[i] = '\0';
	return (c);
}
