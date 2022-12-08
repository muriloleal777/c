/*
Dado o tamanho da base e da altura de um retângulo, calcular a sua área e o seu perímetro.
*/
#include<stdio.h>
#include <locale.h>

float base, altura, area, perimetro;
main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o valor da base do retângulo: ");
    scanf("%f", &base);
    printf("Digite o valor da base do retângulo: ");
    scanf("%f", &altura);

    area=base*altura;
    perimetro=base*2+altura*2;

    printf("Area: %.2f\nPerimetro: %.2f", area, perimetro);
}
