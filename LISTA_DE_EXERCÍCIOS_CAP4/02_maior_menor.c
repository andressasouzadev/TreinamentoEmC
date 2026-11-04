#include <stdio.h>

int main(void) {
    int i, numeros[10], maior, menor;

    for (i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    maior = numeros[0];
    menor = numeros[0];

    for (i = 1; i < 10; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    return 0;
}
