#include "main.h"

/**
 * _strncat -  concatenates strings
 * @src: string value
 * @dest: string value
 * @n: Number of bytes
 * Return: pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int dest_len = 0;

	while (dest[a++])
		dest_len++;
	for (a = 0; src[a] && a < n; a++)
		dest[dest_len++] = src[a];
	return (dest);
}

