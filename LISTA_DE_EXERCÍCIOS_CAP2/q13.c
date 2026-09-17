#include <stdio.h>
int main(void) {
    double l, b, h;
    scanf("%lf %lf %lf", &l, &b, &h);
    printf("Quadrado: %.2f\nRetangulo: %.2f\nTriangulo: %.2f\n", l*l, b*h, b*h/2.0);
    return 0;
}
