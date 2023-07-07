#include "main.h"

/**
 * get_endianness - report if device is big or small endian
 * Return: for big return 0, small Return 1
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *r = (char *) &a;
	
	return (*r);
}

