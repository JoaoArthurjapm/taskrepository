#include <stdio.h>
int ma9n()
{
  int n, maior=0, menor=1000;
  float soma = 0.0, cont=0.0;
  printf("Digite um numero:\n");
  scanf("%d", &n);
  
  while (n >= 0)
  	{	
		if (n > maior)
  			maior = n;
			  
  		
		if (n < menor)
  			menor = n;
  		
  		soma = soma + n;
  		cont++;
  		
  		printf("Digite um numero\n");
  		scanf("%d", &n); 		
  	}
  
  if (cont > 0){
  	printf("Media: %.2f\n", (soma / cont));
  	printf("Maior: %d\n", maior);
  	printf("Menor: %d\n", menor);
  	}
  	
	else
	{
		printf("Media: Valor invalido\n");
  		printf("Maior: Valor invalido\n");
  		printf("Menor: Valor invalido\n");
        printf("____________________________________________");
  		printf("\nDigite numeros maiores que 0\n\n");
  	}	
}