#include <stdio.h>
#include <stdlib.h>

void vypis (int n);

int main(int argc, char *argv[])
{
	int n;
	if ( argc = 2)
	{
		n = atoi(argv[1]);
	}

	vypis(n);
	printf("...\n");
	return 0;
}


void vypis(int n)
{
	for (int i=0; i < n; i++){
		printf("#");
	}
	printf("\n");
}
