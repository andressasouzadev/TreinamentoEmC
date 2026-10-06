#include <stdio.h>

int main(void) {
    int a, b, n, d, primo;
    long long int soma = 0;
    int encontrou = 0;

    printf("Digite A e B positivos, com A < B: ");
    if (scanf("%d %d", &a, &b) != 2 || a <= 0 || b <= 0 || a >= b) {
        printf("Intervalo invalido.\n");
        return 1;
    }
    printf("Primos no intervalo: ");
    for (n = a; n <= b; n++) {
        if (n < 2) continue;
        primo = 1;
        for (d = 2; d <= n / d; d++) {
            if (n % d == 0) {
                primo = 0;
                break;
            }
        }
        if (primo) {
            printf("%d ", n);
            soma += n;
            encontrou = 1;
        }
    }
    if (!encontrou) printf("nenhum");
    printf("\nSoma dos primos: %lld\n", soma);
    return 0;
}
