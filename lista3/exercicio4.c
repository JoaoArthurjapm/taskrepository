#include<stdio.h>
#include<stdbool.h>
#include<conio.h>
#include<math.h>

// Exercicio 4

int ma9n()
{
	int s, emp = 350, x;
	
	printf("Informe seu salario:");
	scanf("%d", &s);
	
	x = (s * 20)/100;	
	
	if (x > emp)
	printf("Emprestimo concedido.");

	else 
	printf("Emprestimo nao concedido.");

	
}