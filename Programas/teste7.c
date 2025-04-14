#include <stdio.h>

int main() {
    int idade;


    printf("Digite a sua Idade: \n");
    scanf("%d", &idade);

    if (idade >= 60) {
        printf("Voce e um idoso");
    } else if (idade >= 25) {
        printf("Voce e um adulto");
    } else if (idade >= 18) {
        printf("Voce e um jovem");
    } else if (idade >= 12) {
        printf("Voce e um adolecente");
    } else {
        printf("Voce e uma crianca");
    }
}