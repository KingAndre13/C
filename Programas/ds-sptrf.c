#include <stdio.h>

int main() { 
    // Iniciação das variáveis
    char nomeEstado[15];
    char codigo[3];
    char nomeCidade[25];
    int populacao;
    float areaKm;
    double pib;
    int pontoTuristico;

    printf("Qual o nome do estado? \n");
    scanf("%s", nomeEstado);
    fflush(stdin);   
    printf("Qual o codigo da carta? \n");
    scanf("%s", codigo);
    fflush(stdin);
    printf("Qual o nome da cidade? \n");
    scanf("%s", nomeCidade);
    fflush(stdin);
    printf("Qual a populacao? \n");
    scanf("%d", &populacao);
    fflush(stdin);
    printf("Qual a area por km²? \n");
    scanf("%f", &areaKm);
    fflush(stdin);
    printf("Qual e o PIB? \n");
    scanf("%lf", &pib);
    fflush(stdin);
    printf("Quantos pontos turisticos?\n");
    scanf("%d", &pontoTuristico);
    fflush(stdin);

    printf("*Carta Cadastrada*\n*%s\n*%s\n*%s\n*%.3d\n*%.3f\n*%.1lf\n*%d", nomeEstado, codigo, nomeCidade, populacao, areaKm, pib, pontoTuristico);

    return 0;

}