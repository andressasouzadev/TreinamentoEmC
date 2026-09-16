#include <stdio.h>
int main(void) {
    double normais,extras,bruto,imposto;
    scanf("%lf %lf",&normais,&extras);
    bruto=normais*10.0+extras*15.0;
    imposto=bruto>12000.0 ? (bruto-12000.0)*0.10 : 0.0;
    printf("Bruto: R$ %.2f\nImposto: R$ %.2f\n",bruto,imposto);
    return 0;
}
