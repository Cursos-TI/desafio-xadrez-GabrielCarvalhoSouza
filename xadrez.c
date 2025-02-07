#include <stdio.h>

int main() {
    // Nível Novato - Movimentação das Peças
    // Implementação de Movimentação do Bispo
    printf("Bispo\n");
    for (int i = 0; i < 5; i++) {
        printf("Cima, Direita\n");
    }

    // Implementação de Movimentação da Torre
    printf("\nTorre\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Implementação de Movimentação da Rainha
    printf("\nRainha\n");
    for (int i = 0; i < 8; i++) {
        printf("Esquerda\n");
    }

    // Nível Aventureiro - Movimentação do Cavalo
    printf("\nCavalo\n");
    int j = 0;
    for (int i = 0; i < 1; i++) {
        while (j < 2) {
            printf("Baixo\n");
            j++;
        }
        printf("Esquerda\n");
    }
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
