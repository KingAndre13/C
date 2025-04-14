#include <stdio.h>

int main () {

    int idade;
    float rendaMensal;
    
    printf("Digite sua idade:\n");
    scanf("%d", &idade);

    if (idade >= 60) {
        printf("Digite sua renda mensal:\n");
        scanf("%f", &rendaMensal);
        if (rendaMensal < 2000.00) {
            printf("O seu desconto esta disponivel para voce");  
        } else {
            printf("Infelizmente, o desconto e somente para pessoas com renda abaixo de R$2000");
        }
        
    } else {
        printf("Infelizmente, o desconto e somente para as pessoas acima de 60 anos");
    }
}