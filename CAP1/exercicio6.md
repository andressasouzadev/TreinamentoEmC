# Questão 06

## Erros de Sintaxe e Lógica encontrados:

1. **Falta das diretivas `#include`:** Não foram incluídas as bibliotecas `<stdio.h>` (para o `printf`) e `<stdlib.h>` (para o `system`).
2. **Tipo de retorno de `main`:** Falta declarar o tipo de retorno `int` da função `main()`.
3. **Erros na linha `int a=1; b=2; c=3:`:**
   - Foram usados pontos e vírgulas (`;`) separando as variáveis em vez de vírgula (`,`). Com isso, `b` e `c` ficaram sem tipo declarado.
   - A linha termina com dois-pontos (`:`) em vez de ponto e vírgula (`;`).
   - Forma correta: `int a = 1, b = 2, c = 3;`
4. **Erros na linha do `printf`:**
   - **Aspas não fechadas:** Faltam as aspas duplas de fechamento antes da vírgula (está `\n,` em vez de `\n",`).
   - **Caractere digitado errado:** Foi colocado o número zero `0` em vez da letra `O` na palavra `"0s"`.
   - **Quantidade incorreta de argumentos (Erro de Lógica):** Existem apenas 3 especificadores `%d%d%d`, mas foram passadas 4 variáveis (`a, b, c, d`).
   - **Variável não declarada:** A variável `d` está sendo passada como argumento, mas não foi declarada nem inicializada no programa.
   - **Formatação:** Os `%d%d%d` estão colados, o que faria os números saírem colados na tela sem espaço.
5. **Falta de retorno:** Falta o comando `return 0;` antes de fechar a função `main`.

---

### Código corrigido:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 1, b = 2, c = 3;

    printf("Os numeros sao: %d %d %d\n", a, b, c);

    system("pause");
    return 0;
}
```
