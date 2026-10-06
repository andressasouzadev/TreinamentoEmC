#include <stdio.h>

int main(void) {
    int a, b, i;
    printf("Digite A e B: ");
    if (scanf("%d %d", &a, &b) != 2) return 1;

    if (a <= b) {
        for (i = a; i <= b; i++) printf("%d ", i);
    } else {
        for (i = a; i >= b; i--) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
