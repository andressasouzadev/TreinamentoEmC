#include <stdio.h>

int main(void) {
    int i, numeros[5];

    for (i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }

    for (i = 4; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }

    printf("\n");
    return 0;
}
