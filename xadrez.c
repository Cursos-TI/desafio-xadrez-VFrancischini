#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    int bispo = 5, torre = 5, rainha = 8, cavalo = 5;

    printf("Bispo movendo...\n");
    // Implementação de Movimentação do Bispo
    while (bispo >= 1)
    {
        printf("Cima-Direita\n");
        bispo--;
    }

    printf("\nTorre movendo...\n");
    // Implementação de Movimentação da Torre
    do
    {
        printf("Direita\n");
        torre--;
    } while (torre >= 1);

    printf("\nRainha movendo...\n");
    // Implementação de Movimentação da Rainha
    for (rainha; rainha >= 1; rainha--)
    {
        printf("Esquerda\n");
    }
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
