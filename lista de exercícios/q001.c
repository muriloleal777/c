/*
Dado o tamanho da base e da altura de um ret�ngulo, calcular a sua �rea e o seu per�metro.
*/
#include<stdio.h>
#include <locale.h>

float base, altura, area, perimetro;
main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o valor da base do ret�ngulo: ");
    scanf("%f", &base);
    printf("Digite o valor da base do ret�ngulo: ");
    scanf("%f", &altura);

    area=base*altura;
    perimetro=base*2+altura*2;

    printf("Area: %.2f\nPerimetro: %.2f", area, perimetro);
}
