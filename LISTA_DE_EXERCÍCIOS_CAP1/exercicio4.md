# Questão 04

## Erros identificados no código:

1. **`#include <stdlib.h>;`**: Diretivas de pré-processador não devem terminar com ponto e vírgula (`;`).
2. **`int Main{}`**: 
   - A função principal deve ser escrita com letra minúscula: `main` (C é case sensitive).
   - Os parâmetros da função devem ser declarados com parênteses `()`, e não chaves `{}`.
3. **Uso de `(` e `)` para abrir e fechar a função**: O corpo de uma função em C deve ser delimitado por chaves `{` e `}`, e não por parênteses.
4. **`printf( Existem %d semanas no ano.,52);`**: O texto da mensagem a ser impressa precisa estar entre aspas duplas: `"Existem %d semanas no ano.\n"`.
5. **`cout << endl;`**: O comando `cout` e `endl` pertencem à linguagem C++, e não à linguagem C. Para pular linha em C usa-se o `\n` dentro do `printf`.

---

## Código corrigido:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Existem %d semanas no ano.\n", 52);
    system("PAUSE");
    return 0;
}
```
