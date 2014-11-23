#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** args)
{
	int numero;
	printf("Inserisci un numero: ");
	scanf("%d", &numero);
	printf("Il valore assoluto di %d e' %d\n", numero, numero > 0 ? numero : numero * -1);
	/* Il primo %d viene sostituito con il numero inserito dall'utente, mentre il secondo viene deciso 
	da questo if-then-else in forma contratta, come abbiamo visto in classe:
	if numero > 0
		assegna al secondo %d: numero
	else
		assegna al secondo %d: numero*-1
	
	if (condizione) ? (istruzione in caso di VERO) : (istruzione in caso di FALSO)
	*/
	
	system("pause");
}
