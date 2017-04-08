#include <stdio.h>

int vypis (int n);

int maint(int argc, char *argv[])
{
	int n;
	if ( argc = 2)
	{
		n = atoi(arv[1])
	}

	vypis(n);
	printf("...");
	return 0;
}


void vypis(int n)
{
	for (int i=0; i < n; i++){
		printf("#");
	}
	printf("\n");
}
