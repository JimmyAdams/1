#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void vypis (int n);

int dlzka(const char *c);

int main(int argc, char *argv[]) //###########
{
	int n;
	char meno[100]; 
	if ( argc == 2)
	{
		strcpy(meno, argv[1]);
	}
	vypis(dlzka(meno)+2);
	printf("#%s#\n", meno);
	vypis(dlzka(meno)+2);
	return 0;
}


void vypis(int n)
{
	for (int i=0; i < n; i++){
		printf("#");
	}
	printf("\n");
}

int dlzka(const char *c)
{
	int d;
	for(int i=0; c[i]!='\0'; i++)
		d=i;
	return d+1;
}