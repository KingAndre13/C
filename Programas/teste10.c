#include <stdio.h>

int main () {
    int idade, dependentes;
    float renda;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua renda: ");
    scanf("%f", &renda);

    printf("Digite o numero de dependentes: ");
    scanf("%d", &dependentes);

    if (idade >= 18 && idade < 65) {
        if (renda < 3000) {
            if (dependentes >= 2) {
                printf("Voce atende os criterios para o beneficio!");
            } else {
                printf("Voce nao atende os criterios devido ao numero abaixo de depedentes.");
            }
            
        } else {
            printf("Voce nao atende os criterios devido a sua renda.");
        }
        
    } else {
        printf("Voce nao atende os criterios devido a sua idade.");
    }
}