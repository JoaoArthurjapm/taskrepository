#include<stdio.h>
#include<stdbool.h>
#include<conio.h>
#include<math.h>


// Exercicio 6

int ma9n()
{
    float n1, n2, media;
    printf("Informe sua nota A: ");
    scanf("%f", &n1);
    printf("Informe sua nota B: ");
    scanf("%f", &n2);
    
    media = ((3.5 * n1) + (7.5 * n2))/11;
    
    printf("Media final igual a %0.2f", media);
}