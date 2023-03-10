#include<stdio.h>
#include<string.h>


void invert(char* bin)
{

	int tam[100];
	int ma[7];
	a = strlen(bin);
	for (int i = 0; i < strlen(bin); i++)
		tam[i] = (int)*(bin + i);


	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			ma[j] = tam[i] % 2;
			tam[i] = tam[i] / 2;
		}

		for (int i = 0; i < 7; i++)
			ma[i] = ma[6 - i];
		printf("%c", bin[i]);
		for (int i = 0; i < 7; i++)
		{
			printf("%d", ma[i]);
			if (i == 7) printf("\n");
		}
	}
}
int main(void)
{



}