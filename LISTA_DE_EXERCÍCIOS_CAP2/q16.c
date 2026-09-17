#include <stdio.h>
#include <math.h>
int main(void) {
    double degrau_cm, altura_m;
    scanf("%lf %lf",&degrau_cm,&altura_m);
    printf("Degraus: %d\n", (int)ceil(altura_m*100.0/degrau_cm));
    return 0;
}
