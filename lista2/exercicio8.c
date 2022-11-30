#include<stdio.h>
#include<stdbool.h>
#include<conio.h>
#include<math.h>

// Exercicio 8 

int ma9n()
{
   int a, b, c, d, x;
   
   printf("Digite valores para a, b, c e d respectivamente:\n");
   scanf("%d %d %d %d", &a, &b, &c, &d);
   
   x = (a * b) - (c * d);
   
   printf("Resultado: %d * %d - %d * %d = %d", a, b, c, d, x);
   }
