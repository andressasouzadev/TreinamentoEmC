#include <stdio.h>
int main(void) {
    double c;
    scanf("%lf", &c);
    printf("Fahrenheit: %.2f\nKelvin: %.2f\n", c*9.0/5.0+32.0, c+273.15);
    return 0;
}
