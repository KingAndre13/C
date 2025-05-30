#include <stdio.h>

int main() {
    char nome[20];
    int nota;
    
    printf("Qual o nome da sua cidade?\n");
    scanf("%s", nome);

    printf("De uma nota de 0 à 10 o quão você ama a sua cidade?\n");
    scanf("%d", &nota);

    int indc = 1;

    while (nota > indc)
    {
        printf("%s\n", nome);
        indc++;
    }
    
}