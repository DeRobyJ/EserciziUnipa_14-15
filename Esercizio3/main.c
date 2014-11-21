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
			float media = (a + b + c) / 3;
			printf("La media tra %.3f, %.3f e %.3f vale %.3f\n\n", a, b, c, media);
			system("pause");
			continue;
		}

		continue;
	}
}