# Questão 04

Valores iniciais:

```text
a = 1, b = 2, c = 3, d = 4
```

1. `a += b + c` → `a = 1 + 2 + 3 = 6`
2. `b *= c = d + 2` → primeiro `c = 6`, depois `b = 2 * 6 = 12`
3. `d %= a + a + a` → `d = 4 % 18 = 4`
4. `d -= c -= b -= a`
   - `b = 12 - 6 = 6`
   - `c = 6 - 6 = 0`
   - `d = 4 - 0 = 4`
5. `a += b += c += 7`
   - `c = 7`
   - `b = 6 + 7 = 13`
   - `a = 6 + 13 = 19`

Resultado final:

```text
a = 19
b = 13
c = 7
d = 4
```

As atribuições encadeadas são avaliadas da direita para a esquerda.
