#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * set_bit - it is a function that changes a given pos
 * @n: pointer pointing to number to chnage
 * @index: index
 * Return: Results
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = ((1UL << index) | *n);
	return (1);
}
