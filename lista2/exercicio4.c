#include<stdio.h>
#include<stdbool.h>
#include<conio.h>
#include<math.h>

// Exercicio 4

int ma9n()
{
   int a, b, x;
   
   printf("Digite dois numeros inteiros que deseja somar:\n");
   scanf("%d%d", &a, &b);
   
   x = a + b;
   
   printf("O valor de %d + %d = %d", a, b, x);
}
