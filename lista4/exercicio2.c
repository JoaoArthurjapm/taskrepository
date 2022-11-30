#include<stdio.h>

int ma9n()
{
	int n, i;
	
	printf("Digite um n�mero qualquer positivo: ");
	scanf("%d", &n);
	
	for (i = n; i >= 0; i--)
	{
		printf("%d ", i);
		
	}
}
