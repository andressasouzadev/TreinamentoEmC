# Questão 14

**Alternativa correta:** **a) Instruir o compilador a carregar as definições das funções da biblioteca padrão antes de compilar o código-fonte.**

---

## Explicação:
Ao utilizar `#include <stdio.h>`, estamos dizendo ao pré-processador para inserir o conteúdo daquele arquivo de cabeçalho no nosso programa. Isso fornece ao compilador as assinaturas (protótipos) das funções padrão (como `printf` e `scanf`), permitindo verificar se os tipos e quantidades de argumentos passados estão corretos durante a compilação.
