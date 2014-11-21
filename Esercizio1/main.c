#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** args)
{
	int numero;
	printf("Inserisci un numero: ");
	scanf("%d", &numero);
	printf("Il valore assoluto di %d e' %d\n", numero, numero > 0 ? numero : numero * -1);
	
	system("pause");
}