#include <stdio.h>
int main(void) {
    int numero;
    scanf("%d", &numero);
    printf("Decimal: %d | Hexadecimal: %x | Octal: %o | ASCII: %c\n",
           numero, numero, numero, numero);
    return 0;
}
