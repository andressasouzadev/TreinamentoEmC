#include <stdio.h>
int main(void) {
    const double PI=3.141593; double r;
    scanf("%lf",&r);
    printf("Area: %.2f\nVolume: %.2f\n", 4*PI*r*r, (4.0/3.0)*PI*r*r*r);
    return 0;
}
