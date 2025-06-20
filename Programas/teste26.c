#include <stdio.h>

int main() {
    int soma = 0;
    int cont = 0;
    for (int i = 1; i <= 500; i += 2) {
        if (i % 3 == 0)
        {
            soma += i;
            cont++;
        }
    }
    printf("A soma de todos os %d valores solicitados e %d", cont, soma);
}