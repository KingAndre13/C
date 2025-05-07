#include <stdio.h>

int main() {
    int opcao, resultadoStatus;
    float n1, n2, n3, n4, media;

    printf("*** Bem-Vindo aos Sistemas de nota! ***\n");
    printf("O que voce deseja?\n");
    printf("1. Calcular a media de um aluno\n");
    printf("2. Mostrar status de um aluno\n");
    printf("Escolha sua opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Digite a 1° nota: \n");
        scanf("%f", &n1);

        printf("Digite a 2° nota: \n");
        scanf("%f", &n2);

        printf("Digite a 3° nota: \n");
        scanf("%f", &n3);

        printf("Digite a 4° nota: \n");
        scanf("%f", &n4);

        if ((n1 >= 0 && n1 <= 10) && (n2 >= 0 && n2 <= 10) && (n3 >= 0 && n3 <= 10) && (n4 >= 0 && n4 <= 10))
        {
             media = (n1 + n2 + n3 + n4) / 4;

            printf("A media do aluno(a) foi : %.2f\n", media);
            
        } else {
            printf("ERRO: Uma ou mais notas estao negativias ou sao maiores que 10!!!");
        }
        break;

        
    case 2:
        printf("Digite qual foi a media do aluno(a): ");
        scanf("%f", &media);

        resultadoStatus = media >= 7 ? 1 : 0;

        if (resultadoStatus == 1)
        {
            printf("Esse aluno(a) foi aprovado!");
        }  else if(resultadoStatus == 0 ) {
            if (media >= 5)
            {
               printf("O aluno(a) ira fazer a recuperacao!");
            } else {
                printf("Esse aluno(a) foi reprovado!");
            }
        }
        else {
            printf("ERRO!!!");
        }
        
        break;
    default:
        printf("Opcao Invalida!");
        break;
    }

}