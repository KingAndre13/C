#include <stdio.h>

int main() {
    int num1, num2, soma;

    printf("Digite o Primeiro Numero: ");
    scanf("%d", &num1);

    printf("Digite o Segundo Numero: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("O resultado da soma de %d e %d e: %d\n", num1, num2, soma);
    return 0;
}