#include <stdio.h>

int main(void) {
    int n, digito;
    long long int invertido = 0;
    printf("Digite um inteiro positivo: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Numero invalido.\n");
        return 1;
    }
    while (n > 0) {
        digito = n % 10;
        invertido = invertido * 10 + digito;
        n /= 10;
    }
    printf("Numero invertido: %lld\n", invertido);
    return 0;
}
