#include <stdio.h>

int main(void) {
    double nota, soma = 0.0, maior = 0.0, menor = 10.0;
    int total = 0;

    while (1) {
        printf("Digite a nota (0 a 10; -1 para encerrar): ");
        if (scanf("%lf", &nota) != 1) return 1;
        if (nota == -1.0) break;
        if (nota < 0.0 || nota > 10.0) {
            printf("Nota invalida. Digite de 0 a 10 ou -1 para sair.\n");
            continue;
        }
        if (total == 0 || nota > maior) maior = nota;
        if (total == 0 || nota < menor) menor = nota;
        soma += nota;
        total++;
    }

    printf("Total de alunos avaliados: %d\n", total);
    if (total > 0) {
        printf("Maior nota: %.2f\n", maior);
        printf("Menor nota: %.2f\n", menor);
        printf("Media geral: %.2f\n", soma / total);
    } else {
        printf("Nenhuma nota valida foi informada.\n");
    }
    return 0;
}
