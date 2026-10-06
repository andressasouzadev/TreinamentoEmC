# Questão 06

a) O erro acontece porque `soma` foi criada dentro do `for`. Ela só existe dentro daquele bloco e não pode ser usada no `printf` que está fora.

b) O laço executa 1, 2, 3 e 4. Quando chega em 5, o `continue` pula aquela repetição. Depois executa 6 e 7. Ao chegar em 8, o `break` encerra o laço.

c) Uma forma de corrigir é declarar `soma` antes do `for`:

```c
int soma = 0;
for (i = 1; i <= 10; i++) {
    if (i == 5)
        continue;
    if (i == 8)
        break;
    soma += i * i;
}
printf("Soma final = %d\n", soma);
```

O resultado será 115. São somados os quadrados de 1, 2, 3, 4, 6 e 7.
