#include <stdio.h>

int main() {
    int opcao;
    float valorDeposito, valorSaque;;

    printf("Escolha uma opcao:\n");
    printf("1. Verificar saldo\n");
    printf("2. Fazer deposito\n");
    printf("3. Fazer saque\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Seu saldo e de R$: 1.000,00\n");
        break;
    case 2:
        printf("Digite o valor do seu deposito:\n");
        scanf("%f", &valorDeposito);
        printf("Seu deposito de R$:%.2f foi efetuado com sucesso!\n", valorDeposito);
        break;
    case 3:
        printf("Digite o valor que vai sacar:\n");
        scanf("%f", &valorSaque);
        printf("Seu saque de R$:%.2f foi efetuado com sucesso!\n", valorSaque);
        printf("Aguarde a quantia sair...");
        break;
    default:
        printf("Valor invavido!");
        break;
    }

}