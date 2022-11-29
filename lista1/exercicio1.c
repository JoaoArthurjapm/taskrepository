#include<stdio.h>
#include<stdbool.h>
#include<conio.h>
#include<math.h>

// Exercicio 1

int main(){
    int horas, minutos, segundos;
    printf("Digite a quantidade de horas: ");
    printf("Digite a quantidade de minutos: ");
    scanf("%d", horas);
    scanf("%d", minutos);
    minutos = horas * 60;
    segundos = minutos * 60;
    printf("Minutos: %d\nSegundos: %d", minutos, segundos);
}