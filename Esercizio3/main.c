#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** args)
{
	int scelta;

	for (;;)
	{
		printf("Vuoi calcolare il minimo tra tre numeri float? [si: 1, no: 0] ");
		scanf("%d", &scelta);

		if (scelta == 0)
			return;
		
		if (scelta == 1)
		{
			printf("Inserisci i tre numeri separati da uno spazio ");
			float a, b, c;
			scanf("%f %f %f", &a, &b, &c);
			
			float minimo;

			if (a < b)
			{
				if (a < c)
					minimo = a;
				else
					minimo = c;
			}
			else if (b < c)
				minimo = b;
			else
				minimo = c;

			printf("Il minore dei tre elementi vale %.3f\n\n", minimo);

			system("pause");
			printf("\n\n");
			continue;
		}

		continue;
	}
}