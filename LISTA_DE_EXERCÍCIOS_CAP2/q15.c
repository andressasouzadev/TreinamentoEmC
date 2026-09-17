#include <stdio.h>
int main(void) {
    double n1,n2,n3,n4;
    scanf("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);
    printf("Media simples: %.2f\n", (n1+n2+n3+n4)/4.0);
    printf("Media ponderada: %.2f\n", (n1+n2+2*n3+2*n4)/6.0);
    return 0;
}
