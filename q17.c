#include <stdio.h>
int main(void) {
    const double PI=3.141593; double r;
    scanf("%lf",&r);
    printf("Area: %.2f\nCircunferencia: %.2f\n", PI*r*r, 2*PI*r);
    return 0;
}
