#include <stdio.h>
#include <math.h>
int main(void) {
    double a,b;
    scanf("%lf %lf",&a,&b);
    printf("Hipotenusa: %.2f\n", sqrt(a*a+b*b));
    return 0;
}
