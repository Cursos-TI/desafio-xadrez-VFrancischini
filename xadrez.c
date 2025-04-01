#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movimenoBispo(int casas){
    if (casas > 0)
    {
        printf("Cima-Direita\n");
        movimenoBispo(casas - 1);
    }
}

void movimentoTorre(int casas){
    if (casas > 0)
    {
        printf("Direita\n");
        movimentoTorre(casas - 1);
    }
}

void movimentoRainha(int casas){
    if (casas > 0)
    {
        printf("Esquerda\n");
        movimentoRainha(casas - 1);
    }
}

int main() {
    int cavalo = 1;

    printf("Cavalo movendo...\n");
    // Nível Aventureiro - Movimentação do Cavalo
    for (cavalo; cavalo <= 1; cavalo++)
    {
        int i = 1;

        while (i <= 2)
        {
            printf("Baixo\n");
            i++;
        }
        printf("Esquerda\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    int bispo = 5, torre = 5, rainha = 8;

    printf("\nBispo movendo...\n");
    movimenoBispo(bispo);

    printf("\nTorre movendo...\n");
    movimentoTorre(torre);

    printf("\nRainha movendo...\n");
    movimentoRainha(rainha);

    return 0;
}
