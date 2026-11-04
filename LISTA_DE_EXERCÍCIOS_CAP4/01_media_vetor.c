#include <stdio.h>

int main(void) {
    int i;
    float valores[5], soma = 0, media;

    for (i = 0; i < 5; i++) {
        scanf("%f", &valores[i]);
        soma += valores[i];
    }

    media = soma / 5;
    printf("%.2f\n", media);
    return 0;
}
