#include<stdio.h>
#include<stdbool.h>
#include<conio.h>
#include<math.h>

// Exercicio 7

int ma9n()
{
    char nome[61], sexo;
    int mat, horas, valor, salario;
    
    printf("Informe seu nome e sexo: ");
    scanf("%s%s", nome, &sexo);
    printf("Numero de matricula: ");
    scanf("%d", &mat);
    printf("Horas trabalhadas: ");
    scanf("%d", &horas);
    printf("Valor recebido por hora: ");
    scanf("%d", &valor);

    salario = horas * valor;
    
    printf("Nome: %s\nSexo: %c\nMatricula: %d\nHoras trabalhadas: %d\nValor recebido por hora: %d\nSalario: %d", nome, sexo, mat, horas, valor, salario);
}