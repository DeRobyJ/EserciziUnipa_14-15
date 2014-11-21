#include <stdio.h>
#include <stdlib.h>

void nop()
{

}

int main(int argc, char** args)
{
	int a, b;
	do
	{
		printf("Inserisci il primo numero: ");
		scanf("%d", &a);
		nop();
		printf("Inserisci il secondo numero: ");
		scanf("%d", &b);
		printf("\n");
	} while (a >= b);

	double media = 0;
	int i;

	for (i = a; i <= b; i++)
		media += i;

	media /= b - a + 1;

	printf("La media tra i numero %d e %d vale %.2f\n\n", a, b, media);
	system("pause");

}