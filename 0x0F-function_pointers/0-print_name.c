#include "function_pointers.h"

/**
 * print_name - function calls a function
 * 		pointer and passes it a name which it then prints
 * @name: pointer to a name
 * @f: pointer to the passed funtion
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
