#include "main.h"

/**
 * _strncat -  concatenates strings
 * @src: string value
 * @dest: string value
 * Return: pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = n;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != 'n')
	{
		dest[a] = src[b];
	        a++;
		b++;
	}
	return(dest);
}
