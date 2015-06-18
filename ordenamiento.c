#include "stdio.h"
#include "stdlib.h"

int main()
{
	int tam; 
	int i=0, j=0;
	int temporal;

	printf("Define el tamaño de tu arreglo: ");
	scanf("%i", &tam);

	int arreglo[tam];
	for (i = 0; i < tam; ++i)
	{
		arreglo[i] = 0;
	}
	i=0;

	for (i = 0; i < tam; ++i)
	{
		printf("Ingresa un dato entero: ");
		scanf("%i", &arreglo[i]);
	}
	i=0;
	for (i = 1; i < tam; ++i)
	{
		for(j=0; j<tam-1; j++){
		if (arreglo[j] > arreglo[j+1])
		{
			temporal = arreglo[j];
			arreglo[j] = arreglo [j+1];
			arreglo[j+1] = temporal;
		}
	  }
	}
	i=0;
	printf("El arreglo ordenado es asi: \n\n");
	for (i = 0; i < tam; ++i)
	{
		printf("%i\n", arreglo[i]);
	}
	return 0;
}