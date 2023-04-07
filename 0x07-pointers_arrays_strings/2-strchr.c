#include "main.h"

/**
 * _strchr - function that locates a character in astring
 *@c: character to locate
 *@s: string
 *Return: first occurence of character c,NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; i >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + 1);
		}
	}
	return ('\0');
}
