#include <stdio.h>

// Definição de constantes para os movimentos das peças
#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8

// Função para movimentação do Bispo (diagonal superior direita)
void mover_bispo() {
    printf("Movimentação do Bispo:\n");
    for (int i = 0; i < BISPO_MOV; i++) {
        printf("Direita\n");
        printf("Cima\n");
    }
    printf("\n");
}

// Função para movimentação da Torre (direita)
void mover_torre() {
    printf("Movimentação da Torre:\n");
    for (int i = 0; i < TORRE_MOV; i++) {
        printf("Direita\n");
    }
    printf("\n");
}

// Função para movimentação da Rainha (esquerda)
void mover_rainha() {
    printf("Movimentação da Rainha:\n");
    for (int i = 0; i < RAINHA_MOV; i++) {
        printf("Esquerda\n");
    }
    printf("\n");
}

// Função principal
int main() {
    // Chamando as funções para cada peça
    mover_bispo();
    mover_torre();
    mover_rainha();
    
    return 0;
}