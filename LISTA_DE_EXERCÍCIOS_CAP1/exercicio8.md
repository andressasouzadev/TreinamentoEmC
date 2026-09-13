# Questão 08

## Explicação do comportamento:

O programa executa os seguintes passos:
1. Inclui as bibliotecas padrão `<stdio.h>` e `<stdlib.h>`.
2. Inicia na função `int main()`.
3. Executa a função `printf("\n\t\"Primeiro programa\"");`:
   - `\n`: Faz o cursor pular para a linha de baixo (quebra de linha).
   - `\t`: Aplica uma tabulação horizontal (espaçamento de tab).
   - `\"`: É uma sequência de escape usada para imprimir as aspas duplas literalmente, sem que o compilador ache que a string terminou ali.
   - `Primeiro programa`: Imprime esse texto.
   - `\"`: Imprime as aspas duplas de fechamento.
4. Executa `system("PAUSE");`, que pausa a execução no Windows exibindo a mensagem "Pressione qualquer tecla para continuar. . .". Como não foi colocado um `\n` no final do `printf`, essa mensagem de pausa aparecerá logo após as aspas duplas na mesma linha.
5. Retorna `0` encerrando o programa com sucesso.

---

## Saída exata gerada:

```text

	"Primeiro programa"Pressione qualquer tecla para continuar. . .
```
