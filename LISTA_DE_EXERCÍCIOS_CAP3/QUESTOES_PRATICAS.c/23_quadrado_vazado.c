#include <stdio.h>

int main(void) {
    int l, linha, coluna;
    printf("Digite o lado do quadrado (3 a 20): ");
    if (scanf("%d", &l) != 1 || l < 3 || l > 20) {
        printf("Dimensao invalida.\n");
        return 1;
    }
    for (linha = 1; linha <= l; linha++) {
        for (coluna = 1; coluna <= l; coluna++) {
            if (linha == 1 || linha == l || coluna == 1 || coluna == l)
                printf("X");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
