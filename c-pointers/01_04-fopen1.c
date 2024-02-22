#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;

	fp = fopen("01_04-fopen.c","r");
	if( fp==NULL)
	{
		fprintf(stderr, "Unable to open file\n");
		exit(1);
	}
	puts("File opened!");
	fclose(fp);

	return(0);
}
