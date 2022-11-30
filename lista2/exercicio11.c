#include<stdio.h>
#include<stdbool.h>
#include<conio.h>
#include<math.h>

// Exercicio 11

int ma9n()
{
    float pi, raio, area, volume;
    
    printf("descubra a area da superficie e o volume de um cilindro");
    printf("\n\nInforme o raio:\n");
    scanf("%f", &raio);
    
    area = (4 * pi * pow(raio,2));
    volume = ((4.0/3) * pi * pow(raio,3));
    
    printf("Area = %0.4f\nVolume: %0.4f", area, volume);
}