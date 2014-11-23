#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** args)
{
	int a, b;
	do
	{
		printf("Inserisci il primo numero: ");
		scanf("%d", &a);
		printf("Inserisci il secondo numero: ");
		scanf("%d", &b);
		printf("\n");
	} while (a >= b);

	double media = (a + b) / 2.0;
	printf("La media tra i numero %d e %d vale %.2f\n\n", a, b, media);
	system("pause");

}