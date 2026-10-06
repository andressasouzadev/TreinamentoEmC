#include <stdio.h>

int main(void) {
    int codigo;
    printf("Decimal\tHexadecimal\tCaractere\n");
    for (codigo = 32; codigo <= 126; codigo++) {
        printf("%3d\t0x%02X\t\t%c\n", codigo, codigo, codigo);
    }
    return 0;
}
