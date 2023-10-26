#include "main.h"

/**
 * binary_to_uint - binary to unsigned int
 * @v: binary number string
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *v)
{
	int j;
	unsigned int dec_val = 0;

	if (!v)
		return (0);
	for (j = 0; v[j]; j++)
	{
		if (v[j] < '0' || v[j] > '1')
			return (0);
		dec_val = 2 * dec_val + (v[j] - '0');
	}

	return (dec_val);
}
