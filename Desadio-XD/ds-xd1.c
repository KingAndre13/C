#include <stdio.h>

int main() {
    int c = 0;
    int t = 0;
    // Movimento Torre
    for (int i = 0; i < 5; i++)
    {
        printf("Torre: Esquerda (%d)\n", i+1);
    }
    printf("|------------------------|\n");
    // Movimento Rainha
    while (c < 8)
    {
        printf("Rainha: Esquerda (%d)\n", c+1);
        c++;
    }

    printf("|------------------------|\n");
    // Movimento Bispo
    do {
        printf("Bispo: Cima (%d) Direita (%d)\n", t+1, t+1);
        t++;
    } while (t < 5);

    
}