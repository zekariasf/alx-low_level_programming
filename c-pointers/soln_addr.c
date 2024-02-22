#include <stdio.h>

int main()
{
	char a;
	char *x;
	int b;
	int *y;
	
	printf("Address of 'a': %p\n",&a);
	printf("Address of 'b': %p\n",&b);
	
	x = &a;
	y = &b;

	printf("Address stored in x: %p\n",x);
	printf("Address stored in y: %p\n",y);

	return(0);
}
