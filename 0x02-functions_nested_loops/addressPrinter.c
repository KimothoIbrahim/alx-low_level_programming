#include <stdio.h>
/* Main fuction - entry point to the program*/
/* description : prints the adresses of local variables in the main function*/
/* always returns 0*/

int main(void)
{	/* local variable declaration*/
	int variable, b, c;
	char d;

	/*print adress*/
	printf("The adress of variable a is %x\n", &variable );
	return(0);
}
