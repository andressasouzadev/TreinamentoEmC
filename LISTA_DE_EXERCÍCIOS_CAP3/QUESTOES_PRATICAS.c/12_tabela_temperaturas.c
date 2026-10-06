#include <stdio.h>

int main(void) {
    int c;
    printf("Celsius\tFahrenheit\tKelvin\n");
    for (c = 0; c <= 100; c += 5) {
        double f = (9.0 * c) / 5.0 + 32.0;
        double k = c + 273.15;
        printf("%3d\t%10.2f\t%7.2f\n", c, f, k);
    }
    return 0;
}
