#include<stdio.h>
#include<stdbool.h>
#include<conio.h>
#include<math.h>


// Exercicio 4

int ma9n()
{
    int n1, n2, resto, quociente;
    
    printf("Digite o valor do numero 1: ");
    scanf("%d", &n1);
    printf("Digite o valor do numero 2: ");
    scanf("%d", &n2);
    
    quociente = n1 / n2;
    resto = n1 % n2;
     printf("Quociente: %d\nResto: %d", quociente, resto);
    }
