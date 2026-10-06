#include <stdio.h>

int main(void) {
    int num, i, encontrou = 0;
    printf("Digite um limite inteiro positivo: ");
    if (scanf("%d", &num) != 1 || num < 1) {
        printf("Limite invalido.\n");
        return 1;
    }
    for (i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            encontrou = 1;
        }
    }
    if (!encontrou) printf("Nenhum numero atende a condicao.");
    printf("\n");
    return 0;
}
