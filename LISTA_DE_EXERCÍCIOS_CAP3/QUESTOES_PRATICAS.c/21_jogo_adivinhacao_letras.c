#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    char secreta, palpite;
    int tentativas = 0;

    srand((unsigned int)time(NULL));
    secreta = (char)('a' + rand() % 26);

    do {
        printf("Adivinhe a letra (a-z): ");
        if (scanf(" %c", &palpite) != 1) return 1;
        tentativas++;
        if (palpite < secreta)
            printf("A letra secreta vem depois no alfabeto.\n");
        else if (palpite > secreta)
            printf("A letra secreta vem antes no alfabeto.\n");
    } while (palpite != secreta);

    printf("Parabens! Voce acertou em %d tentativa(s).\n", tentativas);
    return 0;
}
