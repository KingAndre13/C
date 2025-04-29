#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int opcao, regras;
    int numeroSecreto, palpite;

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        srand(time(0));
        numeroSecreto = rand() % 10;
        printf("Advinhe o numero que estou pensando (de 0 a 9): ");
        scanf("%d", &palpite);

        if (palpite == numeroSecreto)
        {
            printf("Voce ACERTOU MISERAVI! Era o numero %d\n", palpite);
        } else {
            printf("ERROOOUUU!!!, Nao era o numero %d, era o numero %d\n", palpite, numeroSecreto);
        }
        
        break;
    case 2: 
        printf("Regras do Jogo:\nVoce tem que advinhar um numero de 0 a 9\nSe acertar ganha, senao, perdeu!");
        break;
    case 3:
        printf("Tem certeza que quer sair do jogo?\n");
        printf("Escolha a opcao: \n1. Sim\n2.Nao\n");
        scanf("%d", &regras);
        switch (regras)
        {
        case 1:
            printf("Saindo do Jogo...");
            break;
        case 2: 
            printf("Voltando ao menu principal...");
            break;
        default:
            printf("Opcao Invalida");
            break;
        }
        break;
    default:
        printf("Opcao Invalida!");
        break;
    }

}