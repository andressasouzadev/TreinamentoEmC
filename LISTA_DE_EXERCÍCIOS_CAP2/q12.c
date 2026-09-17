#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    printf("Antecessor: %d\nSucessor: %d\n", --n, ++n);
    return 0;
}
