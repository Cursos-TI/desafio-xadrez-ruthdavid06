#include <stdio.h>

// utilizado a técnica de recursividade para simular o movimento das peças de xadrez

// Cada chamada imprime uma direção e chama a si mesma com casas - 1.

void movimentoTorre(int casas){
    if (casas > 0){
        printf("Direita \n"); // Imprime o movimento em cada chamada
        movimentoTorre(casas - 1); // Chamada recursiva até atingir 0
    }
}

// Função recursiva com loops aninhados para simular o movimento do Bispo
void movimentoBispo(int casas){
    if (casas > 0) {
        // Loop externo: vertical (Cima)
        for (int cima = 0; cima < 1; cima++) {
            printf("Cima, ");
            // Loop interno: horizontal (Direita)
            for (int direita = 0; direita < 1; direita++) {
                printf("Direita\n");
            }
        }
        movimentoBispo(casas - 1); // chamada recursiva
    }
}

void movimentoRainha(int casas){
    if (casas > 0){
        printf("Esquerda\n");
        movimentoRainha(casas - 1);
    }
}

int main(){

    // Apresentação inicial do desafio ao usuário
    printf("Desafio Xadrez!!!\n");
    
    //Mover a Torre 5 casas para direita
    printf("\nMovimento da Torre:\n");
    movimentoTorre(5);

    //Mover o Bispo 5 casas na diagonal superior direita 
    printf("\nMovimento do Bispo:\n");
    movimentoBispo(5);

    //Mover a Rainha 8 casas para esquerda
    printf("\nMovimento da Rainha:\n");
    movimentoRainha(8);

    //Mover o cavalo 2 casas para cima e uma para direita (movimento em L)
    printf("\nMovimento do Cavalo:\n");

    for (int movimentoCavalo = 2; movimentoCavalo > 0; movimentoCavalo--){ // Loop externo: movimento vertical (2 casa para cima)
        printf("Cima\n");

        for (int direcao = 1; direcao <= 1; direcao++) { // Loop interno: movimento horizontal (1 casa para direita)
            if (movimentoCavalo == 1 && direcao == 1) {  // Condição para executar "Direita" apenas na segunda iteração
                printf("Direita\n");
                break;
            }
        }
    }
    return 0;
} 