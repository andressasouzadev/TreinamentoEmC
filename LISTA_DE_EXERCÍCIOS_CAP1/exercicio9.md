# Questão 09

## Como o compilador interpreta os argumentos para `%c`:

- O modificador de formato `%c` espera receber o código de um caractere único (tipo `char` ou `int`).
- No primeiro `printf`:
  - `'\n'` é interpretado pelo compilador como uma única constante de caractere (código ASCII 10, quebra de linha).
  - `'\t'` é interpretado como uma constante de caractere (código ASCII 9, tabulação).
  - `'\"'` é interpretado como o caractere aspas duplas (código ASCII 34).
  - Cada um substitui o seu respectivo `%c`. Logo em seguida é impresso o texto `Primeiro programa`.
- No segundo `printf("%c", "\"");`:
  - O argumento passado foi `"\""` (entre aspas duplas, ou seja, uma **string** ou ponteiro `char*`) em vez de `'\"'` (um **caractere** simples entre aspas simples).
  - O especificador `%c` espera um valor inteiro/char, mas recebeu o endereço de memória da string. Para imprimir a aspa de fechamento corretamente como caractere, deveria ter sido escrito `printf("%c", '\"');` ou `printf("%s", "\"");`.
  - Considerando a intenção didática do autor do livro/exercício de fechar as aspas do texto:

---

## Saída esperada (com a correção de `"`):

```text

	"Primeiro programa"Pressione qualquer tecla para continuar. . .
```
