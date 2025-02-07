#include <stdio.h>

int main () {
    float vt ,san, vm, btf;

    printf("Qual foi o seu valor total em dinheiro? ");
    scanf("%f", &vt);

    printf("Qual foi o valor total das suas sangrias? ");
    scanf("%f", &san);

    printf("Quanto e o seu vale-moeadas? ");
    scanf("%f", &vm);

    btf = vt-san-vm;

    printf("Seu Batimento de Caixa deu: %.2f\n", btf);

    return 0;

}