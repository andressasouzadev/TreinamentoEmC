#include <stdio.h>
int main(void) {
    int dia, mes, ano;
    scanf("%d/%d/%d", &dia, &mes, &ano);
    printf("%04d/%02d/%02d\n", ano, mes, dia);
    return 0;
}
