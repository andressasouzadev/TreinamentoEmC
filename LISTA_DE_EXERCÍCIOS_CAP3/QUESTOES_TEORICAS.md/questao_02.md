# Questão 02

Resposta: Os três erros principais são:

1. O ponto e vírgula depois de `#include <stdlib.h>` não deve estar ali.
2. `int Main()` está errado. O correto é `int main()`.
3. No `printf`, a mensagem precisa estar entre aspas.

Um exemplo correto para o `printf` seria:

```c
printf("A idade do aluno eh: %d anos..\n", idade);
```

Também existe `cout << endl;`, que é de C++. Como o exercício é em C, pode ser usado:

```c
printf("\n");
```
