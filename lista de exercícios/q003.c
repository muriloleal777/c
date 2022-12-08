/*
Dado o tamanho do raio de uma circunferência, calcular a área e o perímetro da mesma.
*/
#include<stdio.h>
#include <locale.h>

float raio, area, perimetro;
main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o valor do raio da circunferencia: ");
    scanf("%f", &raio);

    area=3.14*raio*raio;
    perimetro=2*3.14*raio;

    printf("Area: %.2f\nPerimetro: %.2f", area, perimetro);
}
