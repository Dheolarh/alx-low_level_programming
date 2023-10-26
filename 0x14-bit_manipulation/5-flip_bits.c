#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @numa: first number
 * @numb: second number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int numa, unsigned long int numb)
{
	int j, count = 0;
	unsigned long int current;
	unsigned long int exclusive = numa ^ numb;

	for (j = 63; j >= 0; j--)
	{
		current = exclusive >> j;
		if (current & 1)
			count++;
	}

	return (count);
}
