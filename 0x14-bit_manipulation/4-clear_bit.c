#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets value of a bit to 0 at a given index
 * @index: the index to set the bit
 * @n: pointer to the index 
 * Return: 1 if it worked, -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}
