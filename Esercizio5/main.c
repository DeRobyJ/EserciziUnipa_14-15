#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** args)
{
	float rate;
	float in;

	printf("Tasso di cambio (quanti dollari vale un euro): ");
	scanf("%f", &rate);

	printf("\n\n");

	for (;;)
	{
		printf("Valore in dollari: ");
		scanf("%f", &in);

		if (in == 0)
			break;

		double exchanged = in / rate;
		printf("%f dollari valgono %f euro\n\n", in, exchanged);
	}

	printf("\n\n");
	system("pause");
}