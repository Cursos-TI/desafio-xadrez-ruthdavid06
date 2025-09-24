#include <stdio.h>

int main(){ 
    printf("Desafio Xadrez!!!\n");

    const int movimentoTorre = 5;
    const int movimentoBispo = 5;
    const int movimentoRainha = 8;

    int torre, rainha = 1, bispo = 1;

    //Mover a Torre 5 casas para direita
    printf("\nMovimento da peça Torre:\n");
    for (torre = 1; torre <= movimentoTorre; torre++)
    {
        printf("Direita\n"); // imprime a direção do movimento da peça
    }

    //Mover o Bispo 5 casas na diagonal superior direita 
    printf("\nMovimento da peça Bispo:\n");
    while (bispo <= movimentoBispo)
    {
        printf("Cima, Direita\n"); // imprime a direção do movimento da peça na diagonal (cima + direita)
        bispo++;
    } 

    //Mover a Rainha 8 casas a esquerda
    printf("\nMovimento da peça Rainha:\n");
    do 
    {
        printf("Esquerda\n"); // imprime a direção do movimento da peça
        rainha++;
    } while (rainha <= movimentoRainha);

    return 0;
}