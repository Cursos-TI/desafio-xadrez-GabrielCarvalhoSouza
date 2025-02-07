#include <stdio.h>

void rainhaRecursiva(int x) {
    if (x > 0 ) {
        rainhaRecursiva(x - 1);
        printf("Esquerda\n");
    }
}

void torreRecursiva(int x) {
    if (x > 0 ) {
        torreRecursiva(x - 1);
        printf("Direita\n");
    }
}

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
    // Implementação de Movimentação do Bispo Aninhado
    printf("\nBispo Aninhado\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima, ");
        }
        printf("Direita\n");
    }

    // Implementação de Movimentação do Cavalo com estrutura complexa
    printf("\nCavalo Complexo\n");
    for (int i = 0, j = 0; i < 5; i++, j++) {
        printf("Cima\n");
        if (j == 1) {
            printf("Direita\n");
            break;
        }
    }

    // Implementação de Movimentação da Rainha com Recursividade
    printf("\nRainha Recursiva\n");
    int qtd_rainha = 8;
    rainhaRecursiva(qtd_rainha);

    // Implementação de Movimentação da Torre com Recursividade
    printf("\nTorre Recursiva\n");
    int qtd_torre = 5;
    torreRecursiva(qtd_torre);


    return 0;
}
