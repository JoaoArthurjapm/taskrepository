#include<stdio.h>
#include<stdbool.h>
#include<conio.h>
#include<math.h>

// Exercicio 6

int ma9n()
{
	char sexo;
	float altura, m, f;
	
	printf("Descubra seu peso ideal.\nInforme seu sexo. Use 'M' para masculino e 'F'para feminino.\nSexo: ");
	scanf("%s", &sexo);
	printf("Informe sua altura.\nAltura: ");
	scanf("%f", &altura);
	
	m = 72.7 * altura - 58;
	f = 62.1 * altura - 44.7;
	
	switch (sexo)
	{
		case 'M': printf("Seu peso ideal = %0.2f", m); break;
		case 'F': printf("Seu peso ideal = %0.2f", f); break;
		default: printf("Sexo invalido");
	}
}