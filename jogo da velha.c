#include <stdio.h>

char matriz[3][3]={
 {'-', '-', '-'},
 {'-', '-', '-'},
 {'-', '-', '-'} };
int linha, coluna, jogador=1, vitoria=0;
int main(){
    while(jogador==1 && vitoria==0){
        printf("\nJogador 1: Digite qual linha voce quer marcar com X.");
        scanf("%i", &linha);
        printf("\nJogador 1: Agora digite qual coluna você quer marcar com X.");
        scanf("%i", &coluna);
        if(matriz[linha][coluna]=='-'){
            matriz[linha][coluna]='X';
            printf("[%c][%c][%c]\n[%c][%c][%c]\n[%c][%c][%c]", matriz[0][0], matriz[1][0], matriz[2][0], matriz[0][1], matriz[1][1], matriz[2][1], matriz[0][2], matriz[1][2], matriz[2][2]);
            jogador=2;
        } else {
            printf("\nJogador 1: Escolha outra posicao");
        }
        if(matriz[0][0]=='X' && matriz[1][1]=='X' && matriz[2][2]=='X' || matriz[0][2]=='X' && matriz[1][1]=='X' && matriz[2][0]=='X' || matriz[0][0]=='X' && matriz[1][0]=='X' && matriz[2][0]=='X' || matriz[0][1]=='X' && matriz[1][1]=='X' && matriz[2][1]=='X' || matriz[0][2]=='X' && matriz[1][2]=='X' && matriz[2][2]=='X' || matriz[0][0]=='X' && matriz[0][1]=='X' && matriz[0][2]=='X' || matriz[1][0]=='X' && matriz[1][1]=='X' && matriz[1][2]=='X' || matriz[2][0]=='X' && matriz[2][1]=='X' && matriz[2][2]=='X'){
            printf("\nJogador 1 ganhou!");
            vitoria=1;
        }
    }
    while(jogador==2 && vitoria==0){
        printf("\nJogador 2: Digite qual linha voce quer marcar com X.");
        scanf("%i", &linha);
        printf("\nJogador 2: Agora digite qual coluna você quer marcar com X.");
        scanf("%i", &coluna);
        if(matriz[linha][coluna]=='-'){
            matriz[linha][coluna]='O';
            printf("[%c][%c][%c]\n[%c][%c][%c]\n[%c][%c][%c]", matriz[0][0], matriz[1][0], matriz[2][0], matriz[0][1], matriz[1][1], matriz[2][1], matriz[0][2], matriz[1][2], matriz[2][2]);
            jogador=1;
        } else {
            printf("\nJogador 2: Escolha outra posicao");
        }
        if(matriz[0][0]=='O' && matriz[1][1]=='O' && matriz[2][2]=='O' || matriz[0][2]=='O' && matriz[1][1]=='O' && matriz[2][0]=='O' || matriz[0][0]=='O' && matriz[1][0]=='O' && matriz[2][0]=='O' || matriz[0][1]=='O' && matriz[1][1]=='O' && matriz[2][1]=='O' || matriz[0][2]=='O' && matriz[1][2]=='O' && matriz[2][2]=='O' || matriz[0][0]=='O' && matriz[0][1]=='O' && matriz[0][2]=='O' || matriz[1][0]=='O' && matriz[1][1]=='O' && matriz[1][2]=='O' || matriz[2][0]=='O' && matriz[2][1]=='O' && matriz[2][2]=='O'){
            printf("\nJogador 2 ganhou!");
            vitoria=1;
        }
    }
}
