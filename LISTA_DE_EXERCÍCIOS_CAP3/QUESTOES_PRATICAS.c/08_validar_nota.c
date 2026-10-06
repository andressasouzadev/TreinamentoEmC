#include <stdio.h>

int main(void) {
    float nota;
    do {
        printf("Digite uma nota entre 0.0 e 10.0: ");
        if (scanf("%f", &nota) != 1) return 1;
        if (nota < 0.0f || nota > 10.0f)
            printf("Nota invalida. Tente novamente.\n");
    } while (nota < 0.0f || nota > 10.0f);

    printf("Nota registrada com sucesso!\n");
    return 0;
}
