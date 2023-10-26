#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 for big, else 1
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *v = (char *) &i;

	return (*v);
}
