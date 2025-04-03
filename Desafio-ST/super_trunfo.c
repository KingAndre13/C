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

    printf("Qual o codigo da carta(01-04)? \n");
    scanf("%s", codigo1);

    printf("Qual o nome da cidade? \n");
    scanf("%s", nomeCidade1);

    printf("Qual a populacao? \n");
    scanf("%d", &populacao1);

    printf("Qual a area por km2? \n");
    scanf("%f", &areaKm1);

    printf("Qual e o PIB? \n");
    scanf("%lf", &pib1);

    printf("Quantos pontos turisticos?\n");
    scanf("%d", &pontoTuristico1);
    
    //Cadastramento da segunda carta!

    printf("*Cadastre a segunda carta!*\nQual a primeira letra do estado?(A-H)\n");
    scanf(" %c", &letra2);

    printf("Qual o codigo da carta?\n");
    scanf("%s", codigo2);

    printf("Qual o nome da cidade?\n");
    scanf("%s", nomeCidade2);

    printf("Qual e a populacao?\n");
    scanf("%d", &populacao2);

    printf("Qual e a area por km2?\n");
    scanf("%f", &areaKm2);

    printf("Qual e o PIB?\n");
    scanf("%lf", &pib2);

    printf("Quantos pontos turisticos?\n");
    scanf("%d", &pontoTuristico2);

    //Fim do Cadastro, As cartas cadastradas e exibidas abaixo:
    
    printf("Carta 1:\n*Estado: %c\n*Codigo: %c%s\n*Nome da Cidade: %s\n*Populacao: %d\n*Area por km2: %.3f km2\n*PIB: R$:%.1lf Bi\n*Pontos Turisticos: %d\n", letra1, letra1, codigo1, nomeCidade1, populacao1, areaKm1, pib1, pontoTuristico1);
    printf("Carta 2:\n*Estado: %c\n*Codigo: %c%s\n*Nome da Cidade: %s\n*Populacao: %d\n*Area por km2: %.3f km2\n*PIB: R$:%.1lf Bi\n*Pontos Turisticos: %d\n", letra2, letra2, codigo2, nomeCidade2, populacao2, areaKm2, pib2, pontoTuristico2);

    return 0;

}