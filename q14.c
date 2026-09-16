#include <stdio.h>
#include <math.h>
int main(void) {
    double a,b,c,p,area;
    scanf("%lf %lf %lf", &a,&b,&c);
    p=(a+b+c)/2.0;
    area=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("Area: %.2f\n", area);
    return 0;
}
