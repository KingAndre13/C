#include <stdio.h>


int main() {
    char nomePais1[20] = "Espanha";
    char nomePais2[20] = "Franca";
    int populacaoPais1 = 48350000;
    int populacaoPais2 = 68290000;
    float areaKm1 = 506.030;
    float areaKm2 = 551.695;
    float pib1 = 1.62; // O PIB vai está na casa do Trilhões ex: 3000000000 = 3.0T
    float pib2 = 3.05;
    int pontosTuristicos1 = 49;  // Fonte usada foram os patrimônios mundiais considerados pela UNESCO
    int pontosTuristicos2 = 49;
    float densidadeDemografica1 = populacaoPais1 / areaKm1;
    float densidadeDemografica2 = populacaoPais2 / areaKm2;

    int opcao1;
    int opcao2;
    int resultado;
    int empate;

    printf("###Comparativo de Atributos###\n");
    printf("Carta 1: %s | Carta 2: %s\n", nomePais1, nomePais2);
    printf("Populacao: %d | Populacao: %d\n", populacaoPais1, populacaoPais2);
    printf("Area/km2: %.3fkm2 | Area/km2: %.3fkm2\n", areaKm1, areaKm2);
    printf("PIB: %.2fT | PIB: %.2fT\n", pib1, pib2);
    printf("Pontos Turisticos: %d | Pontos Turisticos: %d\n", pontosTuristicos1, pontosTuristicos2);
    printf("Densidade Demografica: %.2f | Densidade Demografica: %.2f\n", densidadeDemografica1, densidadeDemografica2);
    //Menu Interativo
    printf("Qual o primeiro atributo voce quer comparar?\n");
    printf("1.Populacao\n2.Area/km2\n3.PIB\n4.Pontos Turisticos\n5.Densidade Demografica\n");
    printf("Escolha: ");
    scanf("%d", &opcao1);

    switch (opcao1) {

    case 1:
        printf("Qual o segundo atributo voce quer comparar?\n");
        printf("1.Area/km2\n2.PIB\n3.Pontos Turisticos\n4.Densidade Demografica\n");
        printf("Escolha: ");
        scanf("%d", &opcao2);

        switch (opcao2)
        {
        case 1:
            resultado = (populacaoPais1 + areaKm1) > (populacaoPais2 + areaKm2) ? 1 : 0;
            empate = (populacaoPais1 + areaKm1) == (populacaoPais2 + areaKm2) ? 1 : 0;
            if (empate == 1)
            {
                printf("Populacao da Carta %s: %d Populacao da Carta %s: %d\n", nomePais1, populacaoPais1, nomePais2, populacaoPais2);
                printf("Area/km2 da Carta %s: %.3fkm2 Area/km2 da Carta %s: %.3fkm2\n", nomePais1, areaKm1, nomePais2, areaKm2);
                printf("Na soma dos atributos as cartas %s e %s empataram", nomePais1, nomePais2);
            } else if (resultado == 1) {
                printf("Populacao da Carta %s: %d Populacao da Carta %s: %d\n", nomePais1, populacaoPais1, nomePais2, populacaoPais2);
                printf("Area/km2 da Carta %s: %.3fkm2 Area/km2 da Carta %s: %.3fkm2\n", nomePais1, areaKm1, nomePais2, areaKm2);
                printf("Na soma dos atributos a carta %s Venceu essa rodada!", nomePais1);
            } else {
                printf("Populacao da Carta %s: %d Populacao da Carta %s: %d\n", nomePais1, populacaoPais1, nomePais2, populacaoPais2);
                printf("Area/km2 da Carta %s: %.3fkm2 Area/km2 da Carta %s: %.3fkm2\n", nomePais1, areaKm1, nomePais2, areaKm2);
                printf("Na soma dos atributos a carta %s Venceu essa rodada!", nomePais2);
            }
            
        break;
        case 2:
            resultado = (populacaoPais1 + pib1) > (populacaoPais2 + pib2) ? 1 : 0;
            empate = (populacaoPais1 + pib1) == (populacaoPais2 + pib2) ? 1 : 0;
            
            if (empate == 1)
            {
                printf("Populacao da Carta %s: %d Populacao da Carta %s: %d\n", nomePais1, populacaoPais1, nomePais2, populacaoPais2);
                printf("PIB da Carta %s: %.2fT PIB da Carta %s: %.2fT\n", nomePais1, pib1, nomePais2, pib2);
                printf("Na soma dos atributos as cartas %s e %s empataram", nomePais1, nomePais2);
            } else if (resultado == 1) {
                printf("Populacao da Carta %s: %d Populacao da Carta %s: %d\n", nomePais1, populacaoPais1, nomePais2, populacaoPais2);
                printf("PIB da Carta %s: %.2fT PIB da Carta %s: %.2fT\n", nomePais1, pib1, nomePais2, pib2);
                printf("Na soma dos atributos a carta %s Venceu essa rodada!", nomePais1);
            } else {
                printf("Populacao da Carta %s: %d Populacao da Carta %s: %d\n", nomePais1, populacaoPais1, nomePais2, populacaoPais2);
                printf("PIB da Carta %s: %.2fT PIB da Carta %s: %.2fT\n", nomePais1, pib1, nomePais2, pib2);
                printf("Na soma dos atributos a carta %s Venceu essa rodada!", nomePais2);
            }
        
        break;
        case 3:
            resultado = (populacaoPais1 + pontosTuristicos1) > (populacaoPais2 + pontosTuristicos2) ? 1 : 0;
            empate = (populacaoPais1 + pontosTuristicos1) == (populacaoPais2 + pontosTuristicos2) ? 1 : 0;

            if (empate == 1)
            {
                printf("Populacao da Carta %s: %d Populacao da Carta %s: %d\n", nomePais1, populacaoPais1, nomePais2, populacaoPais2);
                printf("Pontos Turisticos da Carta %s: %d Pontos Turisticos da Carta %s: %d\n", nomePais1, pontosTuristicos1, nomePais2, pontosTuristicos2);
                printf("Na soma dos atributos as cartas %s e %s empataram", nomePais1, nomePais2);
            } else if (resultado == 1) {
                printf("Populacao da Carta %s: %d Populacao da Carta %s: %d\n", nomePais1, populacaoPais1, nomePais2, populacaoPais2);
                printf("Pontos Turisticos da Carta %s: %d Pontos Turisticos da Carta %s: %d\n", nomePais1, pontosTuristicos1, nomePais2, pontosTuristicos2);
                printf("Na soma dos atributos a carta %s Venceu essa rodada!", nomePais1);
            } else {
                printf("Populacao da Carta %s: %d Populacao da Carta %s: %d\n", nomePais1, populacaoPais1, nomePais2, populacaoPais2);
                printf("Pontos Turisticos da Carta %s: %d Pontos Turisticos da Carta %s: %d\n", nomePais1, pontosTuristicos1, nomePais2, pontosTuristicos2);
                printf("Na soma dos atributos a carta %s Venceu essa rodada!", nomePais2);
            }

            break;

        case 4:
            resultado = (populacaoPais1 + densidadeDemografica1) < (populacaoPais2 + densidadeDemografica2) ? 1 : 0;
            empate = (populacaoPais1 + densidadeDemografica1) == (populacaoPais2 + densidadeDemografica2) ? 1 : 0;

            if (empate == 1)
            {
                printf("Populacao da Carta %s: %d Populacao da Carta %s: %d\n", nomePais1, populacaoPais1, nomePais2, populacaoPais2);
                printf("Densidade Demografica da Carta %s: %.2f Densidade Demografica da Carta %s: %.2f\n", nomePais1, densidadeDemografica1, nomePais2, densidadeDemografica2);
                printf("Na soma dos atributos as cartas %s e %s empataram", nomePais1, nomePais2);
            } else if (resultado == 1) {
                printf("Populacao da Carta %s: %d Populacao da Carta %s: %d\n", nomePais1, populacaoPais1, nomePais2, populacaoPais2);
                printf("Densidade Demografica da Carta %s: %.2f Densidade Demografica da Carta %s: %.2f\n", nomePais1, densidadeDemografica1, nomePais2, densidadeDemografica2);
                printf("Na soma dos atributos a carta %s Venceu essa rodada!", nomePais1);
            } else {
                printf("Populacao da Carta %s: %d Populacao da Carta %s: %d\n", nomePais1, populacaoPais1, nomePais2, populacaoPais2);
                printf("Densidade Demografica da Carta %s: %.2f Densidade Demografica da Carta %s: %.2f\n", nomePais1, densidadeDemografica1, nomePais2, densidadeDemografica2);
                printf("Na soma dos atributos a carta %s Venceu essa rodada!", nomePais2);
            }
            
            break;

        default:
        printf("Opcao Invalida!");
            break;
        }
        
        break;
    case 2 :
        printf("Qual o segundo atributo voce quer comparar?\n");
        printf("1.Populacao\n2.PIB\n3.Pontos Turisticos\n4.Densidade Demografica\n");
        printf("Escolha: ");
        scanf("%d", &opcao2);
        switch (opcao2)
        {
        case 1:
            resultado = (populacaoPais1 + areaKm1) > (populacaoPais2 + areaKm2) ? 1 : 0;
            empate = (populacaoPais1 + areaKm1) == (populacaoPais2 + areaKm2) ? 1 : 0;

            if (empate == 1)
            {
                printf("Area/km2 da Carta %s: %.3fkm2 Area/km2 da Carta %s: %.3fkm2\n", nomePais1, areaKm1, nomePais2, areaKm2);
                printf("Populacao da Carta %s: %d Populacao da Carta %s: %d\n", nomePais1, populacaoPais1, nomePais2, populacaoPais2);
                printf("Na soma dos atributos as cartas %s e %s empataram", nomePais1, nomePais2);
            } else if (resultado == 1) {
                printf("Area/km2 da Carta %s: %.3fkm2 Area/km2 da Carta %s: %.3fkm2\n", nomePais1, areaKm1, nomePais2, areaKm2);
                printf("Populacao da Carta %s: %d Populacao da Carta %s: %d\n", nomePais1, populacaoPais1, nomePais2, populacaoPais2);
                printf("Na soma dos atributos a carta %s Venceu essa rodada!", nomePais1);
            } else {
                printf("Area/km2 da Carta %s: %.3fkm2 Area/km2 da Carta %s: %.3fkm2\n", nomePais1, areaKm1, nomePais2, areaKm2);
                printf("Populacao da Carta %s: %d Populacao da Carta %s: %d\n", nomePais1, populacaoPais1, nomePais2, populacaoPais2);
                printf("Na soma dos atributos a carta %s Venceu essa rodada!", nomePais2);
            }
            
            break;
        case 2 :
            resultado = (pib1 + areaKm1) > (pib2 + areaKm2) ? 1 : 0;
            empate = (pib1 + areaKm1) == (pib2 + areaKm2) ? 1 : 0;

            if (empate == 1)
            {
                printf("Area/km2 da Carta %s: %.3fkm2 Area/km2 da Carta %s: %.3fkm2\n", nomePais1, areaKm1, nomePais2, areaKm2);
                printf("PIB da Carta %s: %.2fT PIB da Carta %s: %.2fT\n", nomePais1, pib1, nomePais2, pib2);
                printf("Na soma dos atributos as cartas %s e %s empataram", nomePais1, nomePais2);
            } else if (resultado == 1) {
                printf("PIB da Carta %s: %.2fT PIB da Carta %s: %.2fT\n", nomePais1, pib1, nomePais2, pib2);
                printf("Area/km2 da Carta %s: %.3fkm2 Area/km2 da Carta %s: %.3fkm2\n", nomePais1, areaKm1, nomePais2, areaKm2);
                printf("Na soma dos atributos a carta %s Venceu essa rodada!", nomePais1);
            } else {
                printf("PIB da Carta %s: %.2fT PIB da Carta %s: %.2fT\n", nomePais1, pib1, nomePais2, pib2);
                printf("Area/km2 da Carta %s: %.3fkm2 Area/km2 da Carta %s: %.3fkm2\n", nomePais1, areaKm1, nomePais2, areaKm2);
                printf("Na soma dos atributos a carta %s Venceu essa rodada!", nomePais2);
            }
            
            break;
        case 3:
            resultado = (pontosTuristicos1 + areaKm1) > (pontosTuristicos2 + areaKm2) ? 1 : 0;
            empate = (pontosTuristicos1 + areaKm1) == (pontosTuristicos2 + areaKm2) ? 1 : 0;

            if (empate == 1)
            {
                printf("Area/km2 da Carta %s: %.3fkm2 Area/km2 da Carta %s: %.3fkm2\n", nomePais1, areaKm1, nomePais2, areaKm2);
                printf("Pontos Turisticos da Carta %s: %d Pontos Turisticos da Carta %s: %d\n", nomePais1, pontosTuristicos1, nomePais2, pontosTuristicos2);
                printf("Na soma dos atributos as cartas %s e %s empataram", nomePais1, nomePais2);
            } else if (resultado == 1) {
                printf("Area/km2 da Carta %s: %.3fkm2 Area/km2 da Carta %s: %.3fkm2\n", nomePais1, areaKm1, nomePais2, areaKm2);
                printf("Pontos Turisticos da Carta %s: %d Pontos Turisticos da Carta %s: %d\n", nomePais1, pontosTuristicos1, nomePais2, pontosTuristicos2);
                printf("Na soma dos atributos a carta %s Venceu essa rodada!", nomePais1);
            } else {
                printf("Area/km2 da Carta %s: %.3fkm2 Area/km2 da Carta %s: %.3fkm2\n", nomePais1, areaKm1, nomePais2, areaKm2);
                printf("Pontos Turisticos da Carta %s: %d Pontos Turisticos da Carta %s: %d\n", nomePais1, pontosTuristicos1, nomePais2, pontosTuristicos2);
                printf("Na soma dos atributos a carta %s Venceu essa rodada!", nomePais2);
            }
            
            break;

        case 4:
            resultado = (densidadeDemografica1 + areaKm1) < (densidadeDemografica2 + areaKm2) ? 1 : 0;
            empate = (densidadeDemografica1 + areaKm1) < (densidadeDemografica2 + areaKm2) ? 1 : 0;

            if (empate == 1)
            {
                printf("Area/km2 da Carta %s: %.3fkm2 Area/km2 da Carta %s: %.3fkm2\n", nomePais1, areaKm1, nomePais2, areaKm2);
                printf("Densidade Demografica da Carta %s: %.2f Densidade Demografica da Carta %s: %.2f\n", nomePais1, densidadeDemografica1, nomePais2, densidadeDemografica2);
                printf("Na soma dos atributos as cartas %s e %s empataram", nomePais1, nomePais2);
            } else if (resultado == 1) {
                printf("Area/km2 da Carta %s: %.3fkm2 Area/km2 da Carta %s: %.3fkm2\n", nomePais1, areaKm1, nomePais2, areaKm2);
                printf("Densidade Demografica da Carta %s: %.2f Densidade Demografica da Carta %s: %.2f\n", nomePais1, densidadeDemografica1, nomePais2, densidadeDemografica2);
                printf("Na soma dos atributos a carta %s Venceu essa rodada!", nomePais1);
            } else {
                printf("Area/km2 da Carta %s: %.3fkm2 Area/km2 da Carta %s: %.3fkm2\n", nomePais1, areaKm1, nomePais2, areaKm2);
                printf("Densidade Demografica da Carta %s: %.2f Densidade Demografica da Carta %s: %.2f\n", nomePais1, densidadeDemografica1, nomePais2, densidadeDemografica2);
                printf("Na soma dos atributos a carta %s Venceu essa rodada!", nomePais2);
            }

            break;

        default:
                printf("Opcao Invalida!");
            break;
        }
        break;

    case 3 :
        printf("Qual o segundo atributo voce quer comparar?\n");
        printf("1.Populacao\n2.Area/km2\n3.Pontos Turisticos\n4.Densidade Demografica\n");
        printf("Escolha: ");
        scanf("%d", &opcao2);

        switch (opcao2)
        {
        case 1:
            resultado = (populacaoPais1 + pib1) > (populacaoPais2 + pib2) ? 1 : 0;
            empate = (populacaoPais1 + pib1) == (populacaoPais2 + pib2) ? 1 : 0;

            if (empate == 1)
            {
                printf("PIB da Carta %s: %.2fT PIB da Carta %s: %.2fT\n", nomePais1, pib1, nomePais2, pib2);
                printf("Populacao da Carta %s: %d Populacao da Carta %s: %d\n", nomePais1, populacaoPais1, nomePais2, populacaoPais2);
                printf("Na soma dos atributos as cartas %s e %s empataram", nomePais1, nomePais2);

            } else if (resultado == 1) {
                printf("PIB da Carta %s: %.2fT PIB da Carta %s: %.2fT\n", nomePais1, pib1, nomePais2, pib2);
                printf("Populacao da Carta %s: %d Populacao da Carta %s: %d\n", nomePais1, populacaoPais1, nomePais2, populacaoPais2);
                printf("Na soma dos atributos a carta %s Venceu essa rodada!", nomePais1);
            } else {
                printf("PIB da Carta %s: %.2fT PIB da Carta %s: %.2fT\n", nomePais1, pib1, nomePais2, pib2);
                printf("Populacao da Carta %s: %d Populacao da Carta %s: %d\n", nomePais1, populacaoPais1, nomePais2, populacaoPais2);
                printf("Na soma dos atributos a carta %s Venceu essa rodada!", nomePais2);
            }

            break;

        case 2:
            resultado = (areaKm1 + pib1) > (areaKm2 + pib2) ? 1 : 0;
            empate = (areaKm1 + pib1) == (areaKm2 + pib2) ? 1 : 0;

            if (empate == 1)
            {
                printf("PIB da Carta %s: %.2fT PIB da Carta %s: %.2fT\n", nomePais1, pib1, nomePais2, pib2);
                printf("Area/km2 da Carta %s: %.3fkm2 Area/km2 da Carta %s: %.3fkm2\n", nomePais1, areaKm1, nomePais2, areaKm2);
                printf("Na soma dos atributos as cartas %s e %s empataram", nomePais1, nomePais2);
            } else if (resultado == 1) {
                printf("PIB da Carta %s: %.2fT PIB da Carta %s: %.2fT\n", nomePais1, pib1, nomePais2, pib2);
                printf("Area/km2 da Carta %s: %.3fkm2 Area/km2 da Carta %s: %.3fkm2\n", nomePais1, areaKm1, nomePais2, areaKm2);
                printf("Na soma dos atributos a carta %s Venceu essa rodada!", nomePais1);
            } else {
                printf("PIB da Carta %s: %.2fT PIB da Carta %s: %.2fT\n", nomePais1, pib1, nomePais2, pib2);
                printf("Area/km2 da Carta %s: %.3fkm2 Area/km2 da Carta %s: %.3fkm2\n", nomePais1, areaKm1, nomePais2, areaKm2);
                printf("Na soma dos atributos a carta %s Venceu essa rodada!", nomePais2);
            }
            
            break;
        case 3:
            resultado = (pontosTuristicos1 + pib1) > (pontosTuristicos2 + pib2) ? 1 : 0;
            empate = (pontosTuristicos1 + pib1) == (pontosTuristicos2 + pib2) ? 1 : 0;

            if (empate == 1)
            {
                printf("PIB da Carta %s: %.2fT PIB da Carta %s: %.2fT\n", nomePais1, pib1, nomePais2, pib2);
                printf("Pontos Turisticos da Carta %s: %d Pontos Turisticos da Carta %s: %d\n", nomePais1, pontosTuristicos1, nomePais2, pontosTuristicos2);
                printf("Na soma dos atributos as cartas %s e %s empataram", nomePais1, nomePais2);
            } else if (resultado == 1) {
                printf("PIB da Carta %s: %.2fT PIB da Carta %s: %.2fT\n", nomePais1, pib1, nomePais2, pib2);
                printf("Pontos Turisticos da Carta %s: %d Pontos Turisticos da Carta %s: %d\n", nomePais1, pontosTuristicos1, nomePais2, pontosTuristicos2);
                printf("Na soma dos atributos a carta %s Venceu essa rodada!", nomePais1);
            } else {
                printf("PIB da Carta %s: %.2fT PIB da Carta %s: %.2fT\n", nomePais1, pib1, nomePais2, pib2);
                printf("Pontos Turisticos da Carta %s: %d Pontos Turisticos da Carta %s: %d\n", nomePais1, pontosTuristicos1, nomePais2, pontosTuristicos2);
                printf("Na soma dos atributos a carta %s Venceu essa rodada!", nomePais2);
            }
            
            break;
        case 4:
        resultado = (densidadeDemografica1 + pib1) < (densidadeDemografica2 + pib2) ? 1 : 0;
        empate = (densidadeDemografica1 + pib1) == (densidadeDemografica2 + pib2) ? 1 : 0;

        if (empate == 1)
        {
            printf("PIB da Carta %s: %.2fT PIB da Carta %s: %.2fT\n", nomePais1, pib1, nomePais2, pib2);
            printf("Densidade Demografica da Carta %s: %.2f Densidade Demografica da Carta %s: %.2f\n", nomePais1, densidadeDemografica1, nomePais2, densidadeDemografica2);
            printf("Na soma dos atributos as cartas %s e %s empataram", nomePais1, nomePais2);
        } else if (resultado == 1) {
            printf("PIB da Carta %s: %.2fT PIB da Carta %s: %.2fT\n", nomePais1, pib1, nomePais2, pib2);
            printf("Densidade Demografica da Carta %s: %.2f Densidade Demografica da Carta %s: %.2f\n", nomePais1, densidadeDemografica1, nomePais2, densidadeDemografica2);
            printf("Na soma dos atributos a carta %s Venceu essa rodada!", nomePais1);
        } else {
            printf("PIB da Carta %s: %.2fT PIB da Carta %s: %.2fT\n", nomePais1, pib1, nomePais2, pib2);
            printf("Densidade Demografica da Carta %s: %.2f Densidade Demografica da Carta %s: %.2f\n", nomePais1, densidadeDemografica1, nomePais2, densidadeDemografica2);
            printf("Na soma dos atributos a carta %s Venceu essa rodada!", nomePais2);
        }
        
        break;

        default:
            printf("Opcao Invalida!");
            break;
        }
        break;

    case 4 :
        printf("Qual o segundo atributo voce quer comparar?\n");
        printf("1.Populacao\n2.Area/km2\n3.PIB\n4.Densidade Demografica\n");
        printf("Escolha: ");
        scanf("%d", &opcao2);
        switch (opcao2)
        {
        case 1:
            resultado = (populacaoPais1 + pontosTuristicos1) > (populacaoPais2 + pontosTuristicos2) ? 1 : 0;
            empate = (populacaoPais1 + pontosTuristicos1) == (populacaoPais2 + pontosTuristicos2) ? 1 : 0;

            if (empate == 1)
            {
                printf("Pontos Turisticos da Carta %s: %d Pontos Turisticos da Carta %s: %d\n", nomePais1, pontosTuristicos1, nomePais2, pontosTuristicos2);
                printf("Populacao da Carta %s: %d Populacao da Carta %s: %d\n", nomePais1, populacaoPais1, nomePais2, populacaoPais2);
                printf("Na soma dos atributos as cartas %s e %s empataram", nomePais1, nomePais2);
            } else if (resultado == 1) {
                printf("Pontos Turisticos da Carta %s: %d Pontos Turisticos da Carta %s: %d\n", nomePais1, pontosTuristicos1, nomePais2, pontosTuristicos2);
                printf("Populacao da Carta %s: %d Populacao da Carta %s: %d\n", nomePais1, populacaoPais1, nomePais2, populacaoPais2);
                printf("Na soma dos atributos a carta %s Venceu essa rodada!", nomePais1);

            } else {
                printf("Pontos Turisticos da Carta %s: %d Pontos Turisticos da Carta %s: %d\n", nomePais1, pontosTuristicos1, nomePais2, pontosTuristicos2);
                printf("Populacao da Carta %s: %d Populacao da Carta %s: %d\n", nomePais1, populacaoPais1, nomePais2, populacaoPais2);
                printf("Na soma dos atributos a carta %s Venceu essa rodada!", nomePais2);
            }
            
            break;
        case 2:
            resultado = (areaKm1 + pontosTuristicos1) > (areaKm2 + pontosTuristicos2) ? 1 : 0;
            empate = (areaKm1 + pontosTuristicos1) == (areaKm2 + pontosTuristicos2) ? 1 : 0;

            if (empate == 1)
            {
                printf("Pontos Turisticos da Carta %s: %d Pontos Turisticos da Carta %s: %d\n", nomePais1, pontosTuristicos1, nomePais2, pontosTuristicos2);
                printf("Area/km2 da Carta %s: %.3fkm2 Area/km2 da Carta %s: %.3fkm2\n", nomePais1, areaKm1, nomePais2, areaKm2);
                printf("Na soma dos atributos as cartas %s e %s empataram", nomePais1, nomePais2);
            } else if (resultado == 1) {
                printf("Pontos Turisticos da Carta %s: %d Pontos Turisticos da Carta %s: %d\n", nomePais1, pontosTuristicos1, nomePais2, pontosTuristicos2);
                printf("Area/km2 da Carta %s: %.3fkm2 Area/km2 da Carta %s: %.3fkm2\n", nomePais1, areaKm1, nomePais2, areaKm2);
                printf("Na soma dos atributos a carta %s Venceu essa rodada!", nomePais1);
            } else {
                printf("Pontos Turisticos da Carta %s: %d Pontos Turisticos da Carta %s: %d\n", nomePais1, pontosTuristicos1, nomePais2, pontosTuristicos2);
                printf("Area/km2 da Carta %s: %.3fkm2 Area/km2 da Carta %s: %.3fkm2\n", nomePais1, areaKm1, nomePais2, areaKm2);
                printf("Na soma dos atributos a carta %s Venceu essa rodada!", nomePais2);
            }
            
            break;

        case 3:
            resultado = (pib1 + pontosTuristicos1) > (pib2 + pontosTuristicos2) ? 1 : 0;
            empate = (pib1 + pontosTuristicos1) == (pib2 + pontosTuristicos2) ? 1 : 0;

            if (empate == 1)
            {
                printf("Pontos Turisticos da Carta %s: %d Pontos Turisticos da Carta %s: %d\n", nomePais1, pontosTuristicos1, nomePais2, pontosTuristicos2);
                printf("PIB da Carta %s: %.2fT PIB da Carta %s: %.2fT\n", nomePais1, pib1, nomePais2, pib2);
                printf("Na soma dos atributos as cartas %s e %s empataram", nomePais1, nomePais2);
            } else if (resultado == 1) {
                printf("Pontos Turisticos da Carta %s: %d Pontos Turisticos da Carta %s: %d\n", nomePais1, pontosTuristicos1, nomePais2, pontosTuristicos2);
                printf("PIB da Carta %s: %.2fT PIB da Carta %s: %.2fT\n", nomePais1, pib1, nomePais2, pib2);
                printf("Na soma dos atributos a carta %s Venceu essa rodada!", nomePais1);
            } else {
                printf("Pontos Turisticos da Carta %s: %d Pontos Turisticos da Carta %s: %d\n", nomePais1, pontosTuristicos1, nomePais2, pontosTuristicos2);
                printf("PIB da Carta %s: %.2fT PIB da Carta %s: %.2fT\n", nomePais1, pib1, nomePais2, pib2);
                printf("Na soma dos atributos a carta %s Venceu essa rodada!", nomePais2);
            }
            
            break;

        case 4:
            resultado = (densidadeDemografica1 + pontosTuristicos1) < (densidadeDemografica2 + pontosTuristicos2) ? 1 : 0;
            empate = (densidadeDemografica1 + pontosTuristicos1) == (densidadeDemografica2 + pontosTuristicos2) ? 1 : 0;

            if (empate == 1)
            {
                printf("Pontos Turisticos da Carta %s: %d Pontos Turisticos da Carta %s: %d\n", nomePais1, pontosTuristicos1, nomePais2, pontosTuristicos2);
                printf("Densidade Demografica da Carta %s: %.2f Densidade Demografica da Carta %s: %.2f\n", nomePais1, densidadeDemografica1, nomePais2, densidadeDemografica2);
                printf("Na soma dos atributos as cartas %s e %s empataram", nomePais1, nomePais2);
            } else if (resultado == 1) {
                printf("Pontos Turisticos da Carta %s: %d Pontos Turisticos da Carta %s: %d\n", nomePais1, pontosTuristicos1, nomePais2, pontosTuristicos2);
                printf("Densidade Demografica da Carta %s: %.2f Densidade Demografica da Carta %s: %.2f\n", nomePais1, densidadeDemografica1, nomePais2, densidadeDemografica2);
                printf("Na soma dos atributos a carta %s Venceu essa rodada!", nomePais1);

            } else {
                printf("Pontos Turisticos da Carta %s: %d Pontos Turisticos da Carta %s: %d\n", nomePais1, pontosTuristicos1, nomePais2, pontosTuristicos2);
                printf("Densidade Demografica da Carta %s: %.2f Densidade Demografica da Carta %s: %.2f\n", nomePais1, densidadeDemografica1, nomePais2, densidadeDemografica2);
                printf("Na soma dos atributos a carta %s Venceu essa rodada!", nomePais2);
            }

            break;

        default:
            printf("Opcao Invalida!");
            break;
        }
        break;

    case 5 :
        printf("Qual o segundo atributo voce quer comparar?\n");
        printf("1.Populacao\n2.Area/km2\n3.PIB\n4.Pontos Turisticos\n");
        printf("Escolha: ");
        scanf("%d", &opcao2);
        
        break;
    default:
        printf("Opcao invalida!");
        break;
    }

}