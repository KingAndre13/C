#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolhaJogador, escolhaComputador;
    srand(time(0));

    printf("Jogo de Jokenpo\n");
    printf("Escolha uma opcao: \n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha: ");
    scanf("%d", &escolhaJogador);

    escolhaComputador = rand() %3 + 1;

    switch (escolhaJogador)
    {
    case 1:
        if (escolhaComputador == 3) 
        {
            printf("Voce: Pedra\nComputador: Tesoura\nPedra ganha da Tesoura\nVoce Ganhou!!!");
        } else if (escolhaComputador == 2) {
            printf("Voce: Pedra\nComputador: Papel\nPedra perde para o Papel\nVoce Perdeu!");
        } else {
            printf("Voce: Pedra\nComputador: Pedra\nPedra empata com Pedra\nEmpate!");
        }
        
        break;

        case 2:
            if (escolhaComputador == 1)
            {
                printf("Voce: Papel\nComputador: Pedra\nPapel ganha da Pedra\nVoce Ganhou!!!");
            } else if (escolhaComputador == 3) {
                printf("Voce: Papel\nComputador: Tesoura\nPapel perde para a Tesoura\nVoce Perdeu!");
            } else {
                printf("Voce: Papel\nComputador: Papel\nPapel empata com Papel\nEmpate!");
            }
        break;

        case 3:
            if (escolhaComputador == 2)
            {
                printf("Voce: Tesoura\nComputador: Papel\nTesoura ganha do Papel\nVoce Ganhou!!!");
            } else if (escolhaComputador == 1) {
                printf("Voce: Tesoura\nComputador: Pedra\nTesoura perde para a Pedra\nVoce Perdeu!");
            } else {
                printf("Voce: Tesoura\nComputador: Tesoura\nTesoura empata com Tesoura\nEmpate!");
            }
        break;
    default:
    printf("Opcao invalida!");
        break;
    }
}