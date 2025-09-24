#include <stdio.h>

int main(){ 
    printf("Desafio Xadrez!!!\n");

    int torre, rainha = 1, bispo = 1;

    //Mover a Torre 5 casas para direita
    printf("\nMovimento da peça Torre:\n");
    for (torre = 1; torre <= 5; torre++)
    {
        printf("Direita\n"); // imprime a direção do movimento da peça
    }

    //Mover o Bispo 5 casas na diagonal
    printf("\nMovimento da peça Bispo:\n");
    while (bispo <= 5)
    {
        printf("Cima, Direita\n"); // imprime a direção do movimento da peça na diagonal (direita para cima)
        bispo++;
    } 

    //Mover a Rainha 8 casas a esquerda
    printf("\nMovimento da peça Rainha:\n");
    do 
    {
        printf("Esquerda\n"); // imprime a direção do movimento da peça
        rainha++;
    } while (rainha <= 8);

    return 0;
}