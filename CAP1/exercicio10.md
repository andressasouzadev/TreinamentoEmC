# Questão 10

**Alternativa correta:** **b) Verdadeiro (a linguagem C diferencia rigorosamente letras maiúsculas de minúsculas).**

---

## Justificativa e significado prático:

Ser *case sensitive* significa que o compilador diferencia letras maiúsculas de minúsculas em qualquer identificador (nomes de variáveis, funções, estruturas) e palavras-chave da linguagem. 

Por causa disso, `peso`, `Peso` e `PESO` **não representam a mesma variável na memória**. Para o compilador C, são três variáveis totalmente distintas, e cada uma ocupará o seu próprio espaço separado na memória. Da mesma forma, palavras reservadas como `main`, `int`, `return` devem ser escritas obrigatoriamente em minúsculas (`Main` ou `INT` geram erro).
