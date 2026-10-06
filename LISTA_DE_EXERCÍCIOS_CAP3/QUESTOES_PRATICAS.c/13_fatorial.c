#include <stdio.h>
#include <limits.h>

int main(void) {
    int n, i;
    long long int fat = 1;

    printf("Digite um inteiro nao negativo: ");
    if (scanf("%d", &n) != 1) return 1;
    if (n < 0) {
        printf("Erro: o numero nao pode ser negativo.\n");
        return 1;
    }
    /* Em long long int, 20! excede o limite normalmente. */
    if (n > 20) {
        printf("Erro: valor muito grande para long long int.\n");
        return 1;
    }
    for (i = 2; i <= n; i++) fat *= i;
    printf("%d! = %lld\n", n, fat);
    return 0;
}
