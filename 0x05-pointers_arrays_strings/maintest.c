#include <stdio.h>

int main(void)
{
	char *str;

	str = "ibrahim";
	printf("%s \n", str);
	printf("%p \n", str);
	printf("%d \n", *str);
	printf("%p \n", &str);
	return (0);
}
