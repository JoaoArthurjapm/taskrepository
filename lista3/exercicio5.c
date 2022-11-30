#include<stdio.h>
#include<stdbool.h>
#include<conio.h>
#include<math.h>

// Ecercicio 5

int ma9n()
{
	int n1;
	
	printf("Digigte um numero inteiro.");
	scanf("%d", &n1);
	
	printf("%d² = %d\nRaiz = %d", n1, pow(n1,2), sqrt(n1));
}