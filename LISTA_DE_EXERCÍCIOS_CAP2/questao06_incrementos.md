# Questão 06 — Comportamento e Precedência dos Incrementos

## Enunciado
Analise:

```c
int n = 5;
int x = ++n;
printf("Trecho A: n = %d, x = %d\\n", n, x);

int m = 5;
int y = m++;
printf("Trecho B: m = %d, y = %d\\n", m, y);
```

**a)** Explique prefixo e pós-fixo e informe os valores impressos.

**b)** Explique por que `printf("%d\\t%d\\t%d\\n", n, n+1, n++);` pode ter comportamento indefinido.

## Resposta
