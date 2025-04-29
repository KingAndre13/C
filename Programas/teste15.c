#include <stdio.h>

int main() {
    int opcao;

    printf("Menu Principal\n");
    printf("1. Inicar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Execucao do Jogo\n");
        break;
    case 2:
        printf("Regras do Jogo\n");
        printf("Lei de Gil: So nao vale dar o..., mas o resto vale tudo!\n");
        break;
    case 3:
        printf("Saindo do Jogo...\n");
        break;
    default:
        printf("Opcao invalida!");
        break;
    }
}