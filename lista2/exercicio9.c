#include<stdio.h>
#include<stdbool.h>
#include<conio.h>
#include<math.h>

// Exercicio 9 

int ma9n()
{
   char nome[ 61 ];
   float salario, vendas, x;
   
   printf("Nome do vendedor:\n");
   scanf("%s", nome);
   printf("Qual seu salario fixo?\n");
   scanf("%f", &salario);
   printf("Qual o valor de vendas feito no mes?\n");
   scanf("%f", &vendas);
   getchar();
   
   x = salario + (vendas * 15)/100;
   
  printf("Nome: %s\nSalario: %0.2f\nValor de vendas em real: %0.2f\nValor total a receber(salario+comissao) em real: %0.2f", nome, salario, vendas, x);
   
}