#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_bit - It gives value of bit at a position
 * @n: lookup num
 * @index: bit pos
 * Return: Outpot
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int myget;

	if (index > 63)
	{
		return (-1);
	}

	myget = (n >> index) & 1;

	return (myget);
}
