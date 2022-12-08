/*
Dado o tamanho do lado de um quadrado, calcular a área e o perímetro do mesmo.
*/
#include<stdio.h>
#include <locale.h>

float lado, area, perimetro;
main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o valor do lado do quadrado: ");
    scanf("%f", &lado);

    area=lado*lado;
    perimetro=lado*4;

    printf("Area: %.2f\nPerimetro: %.2f", area, perimetro);
}
