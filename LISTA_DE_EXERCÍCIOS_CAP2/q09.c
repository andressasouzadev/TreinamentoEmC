#include <stdio.h>
int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Soma: %d\nSubtracao: %d\nMultiplicacao: %d\n", a+b, a-b, a*b);
    if (b != 0) printf("Divisao: %.2f\n", (double)a / b);
    else printf("Divisao: impossivel: divisor igual a zero.\n");
    /* Matematicamente, o divisor deve ser diferente de zero. */
    return 0;
}
