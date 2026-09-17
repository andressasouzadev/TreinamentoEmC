#include <stdio.h>
int main(void) {
    const double PI = 3.141593;
    double graus;
    scanf("%lf", &graus);
    printf("Radianos: %.6f\n", graus * (PI / 180.0));
    return 0;
}
