#include<stdio.h>
#include<stdbool.h>
#include<conio.h>
#include<math.h>

int ma9n()
{
    int n1, n2, n3, media;
    
    printf("Digite tres numeros:");
    scanf("%d%d%d",&n1, &n2, &n3);
    
    media = (n1 + n2 + n3)/3;
    
    printf("Media: %d", media);
    }
