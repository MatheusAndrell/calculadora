#include <stdio.h>

/******
 * 
 * Alunos: Matheus Andrell, José Vicentini, Gabriel Galvão.
 * 
******/

int main()
{
    int valor1;
    int valor2;
    int resultado;
    int opcao;

    printf("==============================\n");
    printf("|         CALCULADORA        |\n");
    printf("==============================\n");
    printf("|    ESCOLHA UMA OPÇÃO       |\n");
    printf("|                            |\n");
    printf("| [1] SOMA                   |\n");
    printf("| [2] SUBTRAÇÃO              |\n");
    printf("| [3] MULTIPLICAÇÃO          |\n");
    printf("| [4] DIVISÃO                |\n");
    printf("| [5] SAIR                   |\n");
    printf("|                            |\n");
    printf("==============================\n");
    scanf ("%d", &opcao);
    
    switch (opcao) {
        case 1:
            printf("Digite o primeiro número\n");
            scanf("%d", &valor1);
            printf("Digite o segundo valor\n");
            scanf("%d", &valor2);
                resultado = valor1 + valor2;
            printf("O resultado é: %d", resultado);
        break;
        case 2:
            printf("Digite o primeiro número\n");
            scanf("%d", &valor1);
            printf("Digite o segundo valor\n");
            scanf("%d", &valor2);
                resultado = valor1 - valor2;
            printf("O resultado é: %d", resultado);
        break;
        case 3:
            printf("Digite o primeiro número\n");
            scanf("%d", &valor1);
            printf("Digite o segundo valor\n");
            scanf("%d", &valor2);
                resultado = valor1 * valor2;
            printf("O resultado é: %f", resultado);
        break;
        case 4:
            printf("Digite o primeiro número\n");
            scanf("%d", &valor1);
            printf("Digite o segundo valor\n");
            scanf("%d", &valor2);
                resultado = valor1 / valor2;
            printf("O resultado é: %f", resultado);
        break;
        case 5:
            printf("Muito obrigado!\n");
        break;
        default :
            printf("Opção inválida\n");
    }
    return 0;
}
