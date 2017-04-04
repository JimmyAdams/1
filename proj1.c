#include <stdio.h>

int vypis (int n);

int maint(int argc, char *argv[])
{

	printf("...");
	return 0;
}


void vypis(int n)
{
	for (int i=0; i < n; i++){
		printf("#");
	}
}
