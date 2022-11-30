#include<stdio.h>
#include<stdbool.h>
#include<conio.h>
#include<math.h>


// Exercicio 2


int ma9n()
{
	int n1, n2;
	
	printf("Digite dois numeros e descubra qual e maior.");
	printf("\nNumero 1: ");
	scanf("%d", &n1);
	printf("\nNumero 2: ");
	scanf("%d", &n2);
	
	if (n1 > n2)
	printf("\n%d e maior", n1);

	else if (n1 < n2)
	printf("\n%d e maior", n2);

	else  
	printf("\nOs numeros sao iguais.");

	return 0;
	}