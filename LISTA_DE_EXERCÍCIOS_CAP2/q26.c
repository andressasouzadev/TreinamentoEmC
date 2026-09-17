#include <stdio.h>
int main(void) {
    double c,l,preco,metros,custo;
    scanf("%lf %lf %lf",&c,&l,&preco);
    metros=2*(c+l)*3; custo=metros*preco;
    printf("Arame: %.2f m\nCusto: R$ %.2f\n",metros,custo);
    return 0;
}
