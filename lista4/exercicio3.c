#include<stdio.h>

int ma9n()
{
	int n, i;
	
	printf("Digite um numero qualquer positivo: ");
	scanf("%d", &n);
	
	for (i = 1; i <= n;i=i+2)
	{
		printf("%d ", i);
		
	}
}
