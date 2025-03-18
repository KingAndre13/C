#include <stdio.h>

int main() { 
    // Iniciação das variáveis da carta 1
    char letra1;
    char codigo1[3];
    char nomeCidade1[25];
    int populacao1;
    float areaKm1;
    double pib1;
    int pontoTuristico1;
    // Iniciação das variáveis da carta 2
    char letra2;
    char codigo2[3];
    char nomeCidade2[25];
    int populacao2;
    float areaKm2;
    double pib2;
    int pontoTuristico2;
    // Cadastramento da primeira carta!
    printf("*Regras do Jogo*\n1 - A Letra do Estado deve ser em caixa Alta e deve as letra devem ser A até H\n2 - o Codigo da carta deve ser do 01 ao 04(A03, B04, C02)\n");
    printf("*Cadastre sua primeira carta!*\nQual a primeira letra do estado?(A-H) \n");
    scanf("%c", &letra1);

    fflush(stdin);   

    printf("Qual o código da carta(01-04)? \n");
    scanf("%s", codigo1);

    fflush(stdin);

    printf("Qual o nome da cidade? \n");
    scanf("%s", nomeCidade1);

    fflush(stdin);

    printf("Qual a populacao? \n");
    scanf("%d", &populacao1);

    fflush(stdin);

    printf("Qual a area por km²? \n");
    scanf("%f", &areaKm1);

    fflush(stdin);

    printf("Qual e o PIB? \n");
    scanf("%lf", &pib1);

    fflush(stdin);

    printf("Quantos pontos turisticos?\n");
    scanf("%d", &pontoTuristico1);
    
    fflush(stdin);

    //Fim do Cadastro, primeira carta foi cadastrada e exibida abaixo.

    printf("*A Primeira Carta Foi Cadastrada*\n*Estado: %c\n*Código: %c%s\n*Nome da Cidade: %s\n*Populacao: %d\n*Area por km2: %.3f km2\n*PIB: R$:%.1lf Bi\n*Pontos Turisticos: %d\n", letra1, letra1, codigo1, nomeCidade1, populacao1, areaKm1, pib1, pontoTuristico1);
    //Cadastramento da segunda carta!

    printf("*Cadastre a segunda carta!*\nQual a primeira letra do estado?(A-H)\n");
    scanf("%c", &letra2);

    fflush(stdin);

    printf("Qual o codigo da carta?\n");
    scanf("%s", codigo2);

    fflush(stdin);

    printf("Qual o nome da cidade?\n");
    scanf("%s", nomeCidade2);

    fflush(stdin);

    printf("Qual e a populacao?\n");
    scanf("%d", &populacao2);

    fflush(stdin);

    printf("Qual e a area por km2?\n");
    scanf("%f", &areaKm2);

    fflush(stdin);

    printf("Qual e o PIB?\n");
    scanf("%lf", &pib2);

    fflush(stdin);

    printf("Quantos pontos turisticos?\n");
    scanf("%d", &pontoTuristico2);

    fflush(stdin);

    //Fim do Cadastro, segunda carta cadastrada e exibida abaixo

    printf("*A Segunda Carta Foi Cadastrada*\n*Estado: %c\n*Código: %c%s\n*Nome da Cidade: %s\n*Populacao: %d\n*Area por km2: %.3f km2\n*PIB: R$:%.1lf Bi\n*Pontos Turisticos: %d\n", letra2, letra2, codigo2, nomeCidade2, populacao2, areaKm2, pib2, pontoTuristico2);

    //Abaixo vamos comparar as cartas para determinar a vencedora!

    printf("**HORA DA BATALHA!!!**\n Carta %c%s - %s VS Carta %c%s - %s\n", letra1, codigo1, nomeCidade1, letra2, codigo2, nomeCidade2);

    int pontuacaoPlayer1 = 0;
    int pontuacaoPlayer2 = 0;


    if(populacao1 > populacao2) {
        printf("Em Populacao, a Carta %s - %s se saiu melhor\n", codigo1, nomeCidade1);
        pontuacaoPlayer1 = pontuacaoPlayer1 + 1;
    } else {
        printf("Em Populacao, a Carta %s - %s se saiu melhor\n", codigo2, nomeCidade2);
        pontuacaoPlayer2 = pontuacaoPlayer2 + 1;
    }

    if(areaKm1 > areaKm2) {
        printf("Em Area por Km2, a Carta %s - %s se saiu melhor\n", codigo1, nomeCidade1);
        pontuacaoPlayer1 = pontuacaoPlayer1 + 1;
    } else {
        printf("Em Area por Km2, a Carta %s - %s se saiu melhor\n", codigo2, nomeCidade2);
        pontuacaoPlayer2 = pontuacaoPlayer2 + 1;
    }

    if(pib1 > pib2) {
        printf("Em PIB, a Carta %s - %s se saiu melhor\n", codigo1, nomeCidade1);
        pontuacaoPlayer1 = pontuacaoPlayer1 + 1;
    } else {
        printf("Em PIB, a Carta %s - %s se saiu melhor\n", codigo2, nomeCidade2);
        pontuacaoPlayer2 = pontuacaoPlayer2 + 1;
    }

    if(pontoTuristico1 > pontoTuristico2) {
        printf("Em Pontos Turisticos, a Carta %s - %s se saiu melhor\n", codigo1, nomeCidade1);
        pontuacaoPlayer1 = pontuacaoPlayer1 + 1;
    } else {
        printf("Em Pontos Turisticos, a Carta %s - %s se saiu melhor\n", codigo2, nomeCidade2);
        pontuacaoPlayer2 = pontuacaoPlayer2 + 1;
    }

    //Nesse trecho abaixo, vamos ter o placar final do jogo onde tem três cenários: Vitória da Carta1, Vitória da carta2 e empate e declarar fim do jogo no final!

    if(pontuacaoPlayer1 > pontuacaoPlayer2) {
        printf("Placar: %s - %s %d X %d %s - %s\nCarta %s - %s Venceu!!!\nFIM DE JOGO!!!", codigo1, nomeCidade1, pontuacaoPlayer1, pontuacaoPlayer2, codigo2, nomeCidade2, codigo1, nomeCidade1);
    } else {
        if(pontuacaoPlayer1 < pontuacaoPlayer2) {
            printf("Placar: %s - %s (%d X %d) %s - %s\nCarta %s - %s Venceu!!!\nFIM DE JOGO!!!", codigo1, nomeCidade1, pontuacaoPlayer1, pontuacaoPlayer2, codigo2, nomeCidade2, codigo2, nomeCidade2);
        } else {
            printf("Placar: %s - %s %d X %d %s - %s\n A Carta %s - %s e a Carta %s - %s Empataram!!!\nFIM DE JOGO!!!", codigo1, nomeCidade1, pontuacaoPlayer1, pontuacaoPlayer2, codigo2, nomeCidade2, codigo1, nomeCidade1, codigo2, nomeCidade2);
        }
    
    }


    return 0;

}