#include <stdio.h>

int main(void) {
    int n, i;
    long long int anterior = 1, atual = 1, proximo;

    printf("Digite N (termo desejado, a partir de 1): ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("N deve ser positivo.\n");
        return 1;
    }
    if (n > 92) {
        printf("N muito grande para long long int.\n");
        return 1;
    }
    printf("Sequencia: ");
    for (i = 1; i <= n; i++) {
        if (i <= 2) {
            printf("1 ");
        } else {
            proximo = anterior + atual;
            anterior = atual;
            atual = proximo;
            printf("%lld ", atual);
        }
    }
    if (n == 1) printf("\nTermo %d = 1\n", n);
    else printf("\nTermo %d = %lld\n", n, atual);
    return 0;
}
