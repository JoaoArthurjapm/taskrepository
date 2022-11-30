#include<stdio.h>
#include<stdbool.h>
#include<conio.h>
#include<math.h>


// Exercicio 5

int ma9n()
{
    int n1, resto, quociente;
    
    printf("Digite a quantidade de fios em metros: ");
    scanf("%d", &n1);
    
    quociente = n1 / 50;
    resto = n1 % 50;
    
    printf("Quantidade de rolos: %d\nQuantidade de fio em metros a vulso: %d", quociente, resto);
} 