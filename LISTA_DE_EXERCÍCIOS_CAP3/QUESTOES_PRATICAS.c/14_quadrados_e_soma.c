#include <stdio.h>

int main(void) {
    int i;
    long long int soma = 0;
    for (i = 1; i <= 100; i++) {
        printf("%d -> %d\n", i, i * i);
        soma += (long long int)i * i;
    }
    printf("Soma dos quadrados = %lld\n", soma);
    return 0;
}
