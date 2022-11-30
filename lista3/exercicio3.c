#include<stdio.h>
#include<stdbool.h>
#include<conio.h>
#include<math.h>

// Exercicio 3

int ma9n()
{
	int n1;
	
	printf("Descubra se o numero e impar ou par");
	printf("\nInforme o numero: ");
	scanf("%d", &n1);
	
	if (n1 % 2 == 0)
	printf("%d e par.", n1);
	
	else 
	printf("%d e impar", n1);
}
