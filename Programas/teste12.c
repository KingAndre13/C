#include <stdio.h>

int main() {
    char variavel;

    printf("Digite um valor\n");
    scanf("%c", &variavel);

    switch(variavel) {
        case 'a':
            printf("Apple\n");
        break;
        case 'b':
            printf("Banco do Brasil\n");
        break;
        default:
                printf("Valor invalido\n");

    }
}