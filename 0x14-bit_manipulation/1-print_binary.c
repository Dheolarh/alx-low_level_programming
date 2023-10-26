#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @num: number to print in binary
 */
void print_binary(unsigned long int num)
{
	int j, count = 0;
	unsigned long int current;

	for (j = 63; j >= 0; j--)
	{
		current = num >> j;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
