#include <stdio.h>

int main(void) {
    int valor, restante, cedula, quantidade;
    int cedulas[] = {100, 50, 20, 10, 5, 2};
    int i;

    printf("Digite o valor inteiro do saque (R$): ");
    if (scanf("%d", &valor) != 1 || valor <= 0) {
        printf("Valor invalido.\n");
        return 1;
    }
    restante = valor;
    for (i = 0; i < 6; i++) {
        cedula = cedulas[i];
        quantidade = 0;
        while (restante >= cedula) {
            restante -= cedula;
            quantidade++;
        }
        printf("Cedulas de R$ %d: %d\n", cedula, quantidade);
    }
    if (restante != 0)
        printf("Nao e possivel formar exatamente o valor com as cedulas disponiveis. Restante: R$ %d\n", restante);
    return 0;
}
