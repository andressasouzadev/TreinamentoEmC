#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, n3;
    double media;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);

    media = (n1 + n2 + n3) / 3.0;

    printf("Media: %.2f\n", media);

    system("pause");
    return 0;
}
