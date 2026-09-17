#include <stdio.h>
int main(void) {
    int dias; double bruto, liquido;
    scanf("%d",&dias); bruto=dias*30.0; liquido=bruto*0.92;
    printf("Bruto: R$ %.2f\nLiquido: R$ %.2f\n",bruto,liquido);
    return 0;
}
