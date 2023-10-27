#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * clear_bit -It is a function that sets value
 * @n: pointer 
 * @index: index
 * Return: Output
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = (~(1UL << index) & *n);
	return (1);
}
