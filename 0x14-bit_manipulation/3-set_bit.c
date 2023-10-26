#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @num: pointer to the number to set
 * @index: index of the bit to set to 1
 * Return: 1 for success, else -1
 */
int set_bit(unsigned long int *num, unsigned int index)
{
	if (index > 63)
		return (-1);

	*num = ((1UL << index) | *num);
	return (1);
}
