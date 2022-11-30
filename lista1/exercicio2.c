#include<stdio.h>
#include<stdbool.h>
#include<conio.h>
#include<math.h>
#define PI 3.14

int ma9n(){
    float area, raio;
    
    printf("Digite o raio: ");
    scanf("%f", &raio);
     
 area = PI * pow(raio,2);
     printf("Area: %f", area);
}