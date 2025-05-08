#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroJogador, numeroComparador, resultado;
    char tipoComparador;
    // Gerar o número aleatório.
    srand(time(0));
    numeroComparador = rand() % 100 + 1; // Número de 0 à 100
    // Início do Jogo
    printf("*** Comparador de Numeros ***\n");
    printf("Voce deve escolher um numero (de 1 a 100) depois de escolher a modalidade.");
    printf("Qual modalidade voce quer jogar?\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha: ");
    scanf("%c", &tipoComparador);
    printf("Escolha o seu numero: ");
    scanf("%d", &numeroJogador);


    switch (tipoComparador)
    {
    case 'M':
    case 'm':

    printf("Voce escolheu a opcao Maior\n");
    resultado = numeroJogador > numeroComparador ? 1 : 0;
    
    break;

    case 'N':
    case 'n':

    printf("Voce escolheu a opcao Menor\n");
    resultado = numeroJogador < numeroComparador ? 1 : 0;

    break;

    case 'I':
    case 'i':

    printf("Voce escolheu a opcao Igual\n");
    resultado = numeroJogador == numeroComparador ? 1 : 0;
   
    break;

    default:

    printf("Opcao invalida!");

    break;
    }

    if (resultado == 1)
    {
        printf("Seu numero: %d\nNumero do computador: %d\nVoce Venceu!",numeroJogador, numeroComparador);
    } else {
    printf("Seu numero: %d\nNumero do computador: %d\nVoce Perdeu!", numeroJogador, numeroComparador);
    }
        
}