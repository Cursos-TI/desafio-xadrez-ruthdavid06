#include <stdio.h>

int main(){ 
    printf("Desafio Xadrez!!!\n");

    const int movimentoTorre = 5;
    const int movimentoBispo = 5;
    const int movimentoRainha = 8;
    int movimentoCompleto = 1;

    int torre, rainha = 1, bispo = 1;

    //Mover a Torre 5 casas para direita
    printf("\nMovimento da Torre:\n");
    for (torre = 1; torre <= movimentoTorre; torre++)
    {
        printf("Direita\n"); // imprime a direção do movimento da peça
    }

    //Mover o Bispo 5 casas na diagonal superior direita 
    printf("\nMovimento do Bispo:\n");
    while (bispo <= movimentoBispo)
    {
        printf("Cima, Direita\n"); // imprime a direção do movimento da peça na diagonal (cima + direita)
        bispo++;
    } 

    //Mover a Rainha 8 casas a esquerda
    printf("\nMovimento da Rainha:\n");
    do 
    {
        printf("Esquerda\n"); // imprime a direção do movimento da peça
        rainha++;
    } while (rainha <= movimentoRainha);

    //Mover o cavalo 2 casas para baixo e uma para esquerda (movimento em L)
    printf("\nMovimento do Cavalo:\n");
    while (movimentoCompleto <= 1) // controla o movimento em L
    {
        for (int cavalo = 0; cavalo <= movimentoCompleto; cavalo++){ 
            printf("Baixo \n"); // indica que a peça será movida para baixo 2x
        }
        printf("Esquerda\n"); // indica que a peça será movida para esquerda 1x 
        movimentoCompleto++;
    }

    return 0;
}