# Questão 07

## Saída exata de cada instrução:

### a) `printf("\n\tBom dia! Shirley.");`
- **Descrição:** Pula uma linha (`\n`), dá um espaçamento de tabulação horizontal (`\t`, geralmente equivalente a 8 espaços) e escreve o texto.
- **Saída:**
```text

	Bom dia! Shirley.
```

---

### b) `printf("Você já tomou café? \n");`
- **Descrição:** Imprime a frase seguida de um espaço e pula para a linha de baixo (`\n`).
- **Saída:**
```text
Você já tomou café? 

```

---

### c) `printf("\n\nA solução não existe!\nNão insista.");`
- **Descrição:** Pula duas linhas (`\n\n`), imprime a primeira frase, pula uma linha (`\n`) e imprime a segunda frase.
- **Saída:**
```text


A solução não existe!
Não insista.
```

---

### d) `printf("Duas\tlinhas\tde\tsaída\nou\tuma?");`
- **Descrição:** Imprime as palavras com tabulações horizontais entre elas, pula para a próxima linha (`\n`) e imprime `ou`, outra tabulação e `uma?`.
- **Saída:**
```text
Duas	linhas	de	saída
ou	uma?
```

---

### e) `printf("%s\n%s\n%s\n", "um", "dois", "três");`
- **Descrição:** Imprime cada uma das três strings substituindo os especificadores `%s`, pulando uma linha após cada uma delas.
- **Saída:**
```text
um
dois
três

```
