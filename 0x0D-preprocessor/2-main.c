#include <stdio.h>
/**
 * main - Prints current file name
 *
 * Return: always returns 0
 */

int main(void)
{
	#ifdef __FILE__

	printf("%s \n", __FILE__);

	#endif /*__FILE__*/

	return (0);
}
