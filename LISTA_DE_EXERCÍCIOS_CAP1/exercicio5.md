# Questão 05

**Resposta:** Não, o programa não está correto para compilação e execução imediata sob o padrão ANSI C.

## Elementos e diretivas que estão faltando:

1. **Falta de diretivas de inclusão (`#include`):**
   - `#include <stdio.h>`: Necessário para a função `printf()`.
   - `#include <stdlib.h>`: Necessário para a função `system()`.

2. **Tipo de retorno da função `main`:**
   - No padrão ANSI C, a função `main` deve ter seu tipo de retorno explicitamente declarado como `int` (isto é, `int main()`).

3. **Comando de retorno (`return 0;`):**
   - Como a função `main` retorna um inteiro, é necessário colocar `return 0;` ao final para indicar ao sistema operacional que o programa executou com sucesso.

4. **Quebra de linha na saída:**
   - É boa prática colocar um `\n` ao final da mensagem dentro do `printf` para que o texto não fique colado na mensagem do `system("pause")`.

---

### Código corrigido:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Linguagem C\n");
    system("pause");
    return 0;
}
```
