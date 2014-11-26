#include <stdio.h>
#include <stdlib.h>

void nop()
{

}

int main(int argc, char** args)
{
	int count = 0, nonNegativeCount = 0;
	float media = 0, temp;
	char uscita = 'a';
	
	for (;;)
	{
		printf("Inserisci un numero: ");
		
		scanf("%f", &temp);

		if (temp >= 0)
			nonNegativeCount++;

		count++;
		media += temp;

		do
		{
			printf("Vuoi inserire un altro numero (s/n)? ");
			do
			{
				scanf("%c", &uscita);
			} while (uscita == '\n');
		} while (uscita != 's' && uscita != 'n' && uscita != 'S' && uscita != 'N');

		if (uscita == 'n' || uscita == 'N')
			break;

		printf("\n\n");
	}

	media /= count;

	printf("\n\nHai inserito %d numeri di cui %d non negativi e la loro media vale %f\n\n", count, nonNegativeCount, media);

	system("pause");
}