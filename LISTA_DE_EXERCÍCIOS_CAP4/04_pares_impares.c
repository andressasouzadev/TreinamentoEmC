#include <stdio.h>

int main(void) {
    int i, numeros[10], pares = 0, impares = 0;

    for (i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
        if (numeros[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Pares: %d\n", pares);
    printf("Impares: %d\n", impares);
    return 0;
}
