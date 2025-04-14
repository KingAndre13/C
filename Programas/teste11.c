#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero > 0) {

        if (numero % 2 == 0)
        {
            printf("Esse numero e positivo, e par!");
        } else {
            printf("Esse numero e positivo, e impar");
        }
        
    } else if (numero < 0) {
        printf("Esse numero e negativo!");

    } else {
        printf("Igual a zero");
    }
} 