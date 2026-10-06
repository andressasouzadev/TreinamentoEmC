#include <stdio.h>

int main(void) {
    double valor, soma = 0.0;
    int quantidade = 0;

    do {
        printf("Digite um valor (negativo para parar): ");
        if (scanf("%lf", &valor) != 1) return 1;
        if (valor >= 0.0) {
            soma += valor;
            quantidade++;
        }
    } while (valor >= 0.0);

    printf("Quantidade de valores: %d\n", quantidade);
    printf("Soma: %.2f\n", soma);
    if (quantidade > 0)
        printf("Media: %.2f\n", soma / quantidade);
    else
        printf("Media: nao existe, nenhum valor foi informado.\n");
    return 0;
}
