#include <stdio.h>
#include <stdlib.h>
#define NULL 0

int main(int argc, char** args)
{
	int numeri[1000];
	int i, temp, max = 0;
	float media = 0;

	srand(time(NULL));

	for (i = 0; i < 1000; i++)
	{
		temp = rand() % 100 + 1;
		
		if (temp > max)
			max = temp;

		media += temp;

		numeri[i] = temp;
	}

	media /= 1000;

	printf("Il valore massimo vale %d, la media vale %.3f\n\n", max, media);

	system("pause");
}