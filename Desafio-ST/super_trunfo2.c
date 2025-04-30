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

    int opcao;

    printf("###Comparativo de Atributos###\n");
    printf("Carta 1: %s | Carta 2: %s\n", nomePais1, nomePais2);
    printf("Populacao: %d | Populacao: %d\n", populacaoPais1, populacaoPais2);
    printf("Area/km2: %.3fkm2 | Area/km2: %.3fkm2\n", areaKm1, areaKm2);
    printf("PIB: %.2fT | PIB: %.2fT\n", pib1, pib2);
    printf("Pontos Turisticos: %d | Pontos Turisticos: %d\n", pontosTuristicos1, pontosTuristicos2);
    printf("Densidade Demografica: %.2f | Densidade Demografica: %.2f\n", densidadeDemografica1, densidadeDemografica2);
    //Menu Interativo
    printf("Qual atributo voce quer comparar?\n");
    printf("1.Populacao\n2.Area/km2\n3.PIB\n4.Pontos Turisticos\n5.Densidade Demografica\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        if (populacaoPais1 >= populacaoPais2)
        {
            if (populacaoPais1 > populacaoPais2)
            {
                printf("%s: %d x %s: %d - A carta %s vence neste atributo", nomePais1, populacaoPais1, nomePais2, populacaoPais2, nomePais1);
            } else {
                printf("%s: %d x %s: %d - Ambas as cartas empatam neste atributo", nomePais1, populacaoPais1, nomePais2, populacaoPais2);
            }
            
        } else {
            printf("%s: %d x %s: %d - A carta %s vence neste atributo", nomePais1, populacaoPais1, nomePais2, populacaoPais2, nomePais2);
        }
        
        break;
    case 2 :
        if (areaKm1 >= areaKm2)
        {
            if (areaKm1 > areaKm2)
            {
                printf("%s: %.3fkm2 x %s: %.3fkm2 - A carta %s vence neste atributo", nomePais1, areaKm1, nomePais2, areaKm2, nomePais1);
            } else {
                printf("%s: %.3fkm2 x %s: %.3fkm2 - Ambas as cartas empatam neste atributo", nomePais1, areaKm1, nomePais2, areaKm2);
            }
            
        } else {
            printf("%s: %.3fkm2 x %s: %.3fkm2 - A carta %s vence neste atributo", nomePais1, areaKm1, nomePais2, areaKm2, nomePais2);
        }
    
        break;

    case 3 :
        if (pib1 >= pib2)
        {
            if (pib1 > pib2)
            {
                printf("%s: %.2fT x %s: %.2fT - A carta %s vence neste atributo", nomePais1, pib1, nomePais2, pib2, nomePais1);
            } else {
                printf("%s: %.2fT x %s: %.2fT - Ambas as cartas empatam neste atributo", nomePais1, pib1, nomePais2, pib2);
            }
            
        } else {
            printf("%s: %.2fT x %s: %.2fT - A carta %s vence neste atributo", nomePais1, pib1, nomePais2, pib2, nomePais2);
        }

        break;

    case 4 :
        if (pontosTuristicos1 >= pontosTuristicos2)
        {
            if (pontosTuristicos1 > pontosTuristicos2)
            {
                printf("%s: %d x %s: %d - A carta %s vence neste atributo", nomePais1, pontosTuristicos1, nomePais2, pontosTuristicos2, nomePais1);
            } else {
                printf("%s: %d x %s: %d - Ambas as cartas empatam neste atributo", nomePais1, pontosTuristicos1, nomePais2, pontosTuristicos2);
            }
        } else {
            printf("%s: %d x %s: %d - A carta %s vence neste atributo", nomePais1, pontosTuristicos1, nomePais2, pontosTuristicos2, nomePais2);
        }
        
        break;

    case 5 :
        if (densidadeDemografica1 <= densidadeDemografica2)
        {
            if (densidadeDemografica1 < densidadeDemografica2)
            {
                printf("%s: %.2f x %s: %.2f - A carta %s vence neste atributo", nomePais1, densidadeDemografica1, nomePais2, densidadeDemografica2, nomePais1);
            } else {
                printf("%s: %.2f x %s: %.2ff - Ambas as cartas empatam neste atributo", nomePais1, densidadeDemografica1, nomePais2, densidadeDemografica2);
            }
        } else {
            printf("%s: %.2f x %s: %.2f - A carta %s vence neste atributo", nomePais1, densidadeDemografica1, nomePais2, densidadeDemografica2, nomePais2);
        }
        
        break;
    default:
        printf("Opcao invalida!");
        break;
    }
}