#include <stdio.h>

int main(void) {
    int n, i, divisores = 0;
    printf("Digite um inteiro positivo: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Numero invalido.\n");
        return 1;
    }
    for (i = 1; i <= n; i++) {
        if (n % i == 0) divisores++;
    }
    printf("Quantidade de divisores: %d\n", divisores);
    if (n > 1 && divisores == 2)
        printf("%d e primo.\n", n);
    else
        printf("%d nao e primo.\n", n);
    return 0;
}
