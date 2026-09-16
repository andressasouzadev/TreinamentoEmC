#include <stdio.h>
int main(void) {
    double salario; scanf("%lf",&salario);
    printf("Liquido: R$ %.2f\n", salario + salario*0.05 - salario*0.07);
    return 0;
}
