#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @num: pointer to the number to change
 * @index: index of the bit to clear
 * Return: 1 for success, else -1
 */
int clear_bit(unsigned long int *num, unsigned int index)
{
	if (index > 63)
		return (-1);

	*num = (~(1UL << index) & *num);
	return (1);
}
