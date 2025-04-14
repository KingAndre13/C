#include <stdio.h>

int main () {
    int nota;

    printf("Digite a sua Nota: \n");
    scanf("%d", &nota);

    if (nota < 50) {

        printf("A sua nota e F Timmy Turner por causa dos seus PaDRinhos MaGIgOs!");

    } else if (nota < 60) {

        printf("A sua nota e E");

    } else if (nota < 70) {

        printf("A sua nota e D");

    } else if (nota < 80) {

        printf("A sua nota e C");

    } else if (nota < 90) {

        printf("A sua nota e B");
        
    } else {
        printf("A sua nota e A");
    }
}