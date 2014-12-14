// Programma che prende un input di 10 interi e mette alle prime 3 caselle i numeri più grandi di esso.
// Costruito in modo da rendere ogni funzione indipendente dalle altre: in questo modo posso riutilizzare le funzioni in altri progetti modificando solo pochi accorgimenti


#include <stdio.h>
#include <stdlib.h>

int Output(int array[], int lunghezza) { //Questa funzione può essere chiamata in qualunque programma per stampare un array di una certa lunghezza
    int i;
    for (i=0; i<lunghezza; i++) printf("%d ", array[i]); //Stampo ad uno ad uno i numeri, divisi da spazio (lo spazio dopo il %d)
    return 0;
}

int MassimiPrima(int array[], int lunghezza, int quanti){ //Questa funzione può essere riutilizzata per ordinare l'array in ordine decrescente o per posizionare i valori più grandi alle prime n posizioni
    int i, j, temp;
    for (i=0; i<quanti; i++){
        for (j=i+1; j<lunghezza; j++){ //Sostanzialmente è un ordinamento decrescente, ma al posto di eseguirlo su tutto l'array, lo eseguo sulle prime 3 posizioni
            if (array[i]<array[j]) {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    printf("\nEcco il risultato: \n"); //Il primo \n va a capo dopo che l'utente ha scritto i numeri, il secondo per scivere l'output a capo
    Output(array, lunghezza);

    return 0;
}

int Input(int lunghezza) { //Questa funzione, privata della call a MassimiPrima, può essere riutilizzata per chiedere un tot di numeri all'utente e immagazinarli in un array
    int array[lunghezza]; //Creo l'arrey di 10 posti
    printf("Si scrivano %d numeri separati da spazio.\n", lunghezza);
    int i;
    for (i=0; i<lunghezza; i++) scanf("%d", &array[i]); //In questo modo, l'utente può scrivere il tutto, e il for ripeterà la scansione 10 volte

    MassimiPrima(array, lunghezza, 3); //Chiamo una funzione che mette alle prime posizioni i numeri più grandi. Voglio che 3 posizioni siano così, inoltre dico alla funzione qual è l'array e quanto è lungo

    return 0;
}

int main()
{
    Input(10); //Richiamo la funzione di input, e voglio che l'array abbia 10 posti
    return 0;
}
