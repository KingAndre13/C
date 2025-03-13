#include <stdio.h>

int main() { // Variáveis dos dados de entrada
    float umidade;
    float temperatura;
    unsigned int estoque, estoqueMinimo = 1000;
    // Entrada de dados
    printf("Qual e a Temperatura atual: \n");
    scanf("%f", &temperatura);

    printf("Qual e a Umidade atual: \n");
    scanf("%f", &umidade);

    printf("Qual e o nivel de estoque atual: \n");
    scanf("%u", &estoque);
    // Estrutura condicional do programa
    if( temperatura > 30) {
        printf("ALERTA: TEMPERATURA ACIMA DO PADRAO!!!\n");
    } else {
        printf("A temperatura esta adequada!\n");
    }

    if( umidade > 50) {
        printf("ALERTA: UMIDADE ACIMA DO PADRAO\n");
    } else {
        printf("A umidade esta adequada!\n");
    }
    
    if(estoque < estoqueMinimo) {
        printf("ALERTA: ESTOQUE ABAIXO DO PADRAO\n");
    } else {
        printf("O estoque esta com uma quantidade adequada!\n");
    }

    return 0;

}