#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int bispo = 1;
    int torre = 1;
    int rainha;
    int cavalo = 1;
    // Implementação de Movimentação do Bispo - 5 casas
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("\n*** Bispo ***\n");
    while (bispo <= 5)
    {
        printf("1 casa diagonal superior direita\n", bispo);
        bispo++;
    }
    printf("\n*** Torre ***\n");
    // Implementação de Movimentação da Torre - 5 casas
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    do {
        printf("1 casa para a direita\n", torre);
        torre++;
    } while (torre <= 5);

    // Implementação de Movimentação da Rainha - 8 casas
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\n*** Rainha ***\n");
    for (rainha = 1; rainha <= 8; rainha++)
    {
        printf("1 casa para a esquerda\n", rainha);
    }
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\n*** Cavalo ***\n");
    while (cavalo--)
    {
        for (int cavalobaixo = 0; cavalobaixo < 2; cavalobaixo++) 
        {
            printf("Baixo\n");
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
