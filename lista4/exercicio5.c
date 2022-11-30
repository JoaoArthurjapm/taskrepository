#include<stdio.h>

int main()
{
	int i, soma=0, cont=0;
	
	printf("Os cinqueta primeiro numeros pares.\n");
	
	
	for ( i = 2; i <= 100;i=i+2)
	{
		soma+= i;
		
		printf("%d ", i);
		
		cont++;
		
	}

	printf("\n\nSoma dos 50 primeiros numeros pares: %d\n", soma);
	printf("Contador: %d", cont);
}