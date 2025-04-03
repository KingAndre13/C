#include <stdio.h>

int main() {
    int idade, altura;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura (em cm): \n");
    scanf("%d", &altura);

    if ((idade >= 18 && idade <= 30) && altura >= 170) {
        printf("Voce esta apto (Ha que? eu nao sei!!!)");
    } else {
        printf("Voce nao esta apto (Ha que? eu nao sei!!!)");
    }
    
}