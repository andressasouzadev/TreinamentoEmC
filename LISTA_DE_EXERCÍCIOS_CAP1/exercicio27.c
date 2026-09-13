#include <stdio.h>
#include <stdlib.h>

int main() {
    int totalSegundos;
    int horas, minutos, segundos;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &totalSegundos);

    horas = totalSegundos / 3600;
    minutos = (totalSegundos % 3600) / 60;
    segundos = totalSegundos % 60;

    printf("%d segundos correspondem a %d hora(s), %d minuto(s) e %d segundo(s)\n",
           totalSegundos, horas, minutos, segundos);

    system("pause");
    return 0;
}
