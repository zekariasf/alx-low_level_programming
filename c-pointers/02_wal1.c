#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p,x;

	p = (int *)malloc(sizeof(int) * 10);
	if(p==NULL)
	{
		fprintf(stderr,"allocation failed");
		exit(1);
	}

	for (x=0; x<10; x++)
	{
		*p = x * 100;
		p++;
	}

	return(0);
}
