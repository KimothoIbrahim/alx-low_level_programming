#include "main.h"

/**
 * _sqrt_recursion - func
 * @n: desc
 * 
 * Return: trsu
 */

int _sqrt_recursion(int n)
{
	int x;

	if (n < 0)
		return (-1);

	if (n == 0 || n == 1) 
		return n; 

	x = _sqrt_recursion(n >> 2) << 1; 

	if ((x * x + 2 * x + 1) > n)
		return x; 

	return (x + 1); 
}
