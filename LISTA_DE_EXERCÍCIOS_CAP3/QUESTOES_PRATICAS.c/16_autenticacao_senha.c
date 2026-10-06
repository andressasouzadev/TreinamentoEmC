#include <stdio.h>

int main(void) {
    const int senhaSecreta = 2026;
    int senha, tentativa, acertou = 0;

    for (tentativa = 1; tentativa <= 3; tentativa++) {
        printf("Digite a senha: ");
        if (scanf("%d", &senha) != 1) return 1;
        if (senha == senhaSecreta) {
            printf("Acesso Concedido! Tentativas utilizadas: %d\n", tentativa);
            acertou = 1;
            break;
        }
        printf("Senha incorreta.\n");
    }
    if (!acertou) printf("Conta Bloqueada por Seguranca!\n");
    return 0;
}
