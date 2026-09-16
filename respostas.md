# Questões teóricas e analíticas

## Questão 01
**a)** O valor exibido é `2`.

**b)** `2.97` é um valor de ponto flutuante. Ao ser atribuído a uma variável `int`, a parte decimal é descartada. Isso é uma conversão implícita de tipos, com truncamento.

**c)** Para manter a precisão, use `float` ou `double`. Para controlar a conversão, faça um cast explícito, por exemplo `(int)valor`. Para arredondar, use `round()` de `<math.h>`; para manter duas casas na saída, use `printf("%.2f", valor)`.

## Questão 02
**a)** `<conio.h>` não faz parte do padrão ANSI/ISO C. Funções como `getch()` e `getche()` dependem de implementações específicas e podem não existir em Linux, macOS ou servidores.

**b)** A biblioteca padrão `<stdio.h>` oferece `getchar()` para ler um caractere e `putchar()` para exibi-lo. Também existem `fgets()` e `fputs()` para linhas de texto.

**c)** Uma forma robusta é descartar caracteres até encontrar `\n` ou `EOF` e depois chamar `getchar()`.

```c
#include <stdio.h>

int main(void) {
    int ch;
    do {
        ch = getchar();
    } while (ch != '\n' && ch != EOF);

    ch = getchar();
    printf("Caractere: %c\n", ch);
    return 0;
}
```

## Questão 03
O programa está em `codigo/q03.c`. Ele lê um inteiro e usa `%d`, `%x`, `%o` e `%c` na mesma mensagem.

## Questão 04
A atribuição composta avalia a expressão do lado direito e depois atribui. As atribuições em C associam da direita para a esquerda.

- Inicial: `a=1, b=2, c=3, d=4`.
- `a += b + c` → `a = 1 + 2 + 3 = 6`.
- `b *= c = d + 2` → primeiro `c = 4 + 2 = 6`; depois `b = 2 * 6 = 12`.
- `d %= a + a + a` → `d = 4 % (6+6+6) = 4`.
- `d -= c -= b -= a`: `b = 12-6 = 6`; `c = 6-6 = 0`; `d = 4-0 = 4`.
- `a += b += c += 7`: `c=7`; `b=13`; `a=19`.

**Resultado final:** `a=19, b=13, c=7, d=4`.

## Questão 05
Assumindo `i=1, j=2, k=3, n=2, x=3.3, y=4.4`:

| Item | Resultado |
|---|---:|
| a) `i < j + 3` | 1 |
| b) `2*i - 7 <= j - 8` | 1 |
| c) `-x + y >= 2.0*y` | 0 |
| d) `x == y` | 0 |
| e) `!(n - j)` | 1 |
| f) `!n - j` | -2 |
| g) `i && j && k` | 1 |
| h) `i || j - 3 && k` | 1 |
| i) `i < j && 2 >= k` | 0 |
| j) `i == 2 || j == 4 || k == 5` | 0 |

Observação: no item f, a expressão inteira resulta em `-2`; ela não é uma expressão booleana isolada.

## Questão 06
**a)** No prefixado, o incremento acontece antes da atribuição: `n` passa a 6 e `x` recebe 6. No pós-fixado, a atribuição recebe o valor antigo: `y` recebe 5 e depois `m` passa a 6.

- Trecho A: `n=6, x=6`.
- Trecho B: `m=6, y=5`.

**b)** Na chamada `printf("%d\t%d\t%d\n", n, n+1, n++);`, a mesma variável é lida e modificada sem uma ordem de avaliação garantida entre os argumentos. Em C, isso pode gerar comportamento indefinido. O correto é separar a alteração em outra instrução.
