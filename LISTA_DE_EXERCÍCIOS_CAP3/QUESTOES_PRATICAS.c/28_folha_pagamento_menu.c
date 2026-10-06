#include <stdio.h>

int main(void) {
    int opcao;
    double salario, resultado;

    do {
        printf("\n=== Folha de Pagamento ===\n");
        printf("1. Reajuste salarial\n");
        printf("2. Retencao de imposto de renda\n");
        printf("3. Encerrar programa\n");
        printf("Escolha uma opcao: ");
        if (scanf("%d", &opcao) != 1) return 1;

        switch (opcao) {
            case 1:
                printf("Digite o salario: R$ ");
                if (scanf("%lf", &salario) != 1 || salario < 0) return 1;
                resultado = salario * (salario <= 2000.0 ? 1.15 : 1.10);
                printf("Novo salario: R$ %.2f\n", resultado);
                break;
            case 2:
                printf("Digite o salario: R$ ");
                if (scanf("%lf", &salario) != 1 || salario < 0) return 1;
                resultado = salario * (salario <= 3000.0 ? 0.08 : 0.15);
                printf("Imposto retido: R$ %.2f\n", resultado);
                printf("Salario apos retencao: R$ %.2f\n", salario - resultado);
                break;
            case 3:
                printf("Programa encerrado.\n");
                break;
            default:
                printf("Opcao invalida. Escolha 1, 2 ou 3.\n");
        }
    } while (opcao != 3);

    return 0;
}
