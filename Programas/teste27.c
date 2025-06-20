#include <stdio.h>
#include <unistd.h>

int main () {

    int numero;

    printf("Digite um numero para ver sua tabuada: ");
    scanf("%d", &numero);

    for (int i = 0; i <= 10; i++)
    {
        printf("%d X %d = %d\n", numero, i, numero*i);
        sleep(1);
    }
    
    
    return 0;
}