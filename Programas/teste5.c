#include <stdio.h>

int main () {
    char nome [20];
    int idade;
    printf("Digite o seu primeiro nome: ");
    scanf("%s", &nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Seu nome e %s e voce tem %d anos ", nome, idade);
}