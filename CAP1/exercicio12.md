# Questão 12

| Instrução | Status (C/I) | Justificativa Teórica |
| :--- | :--- | :--- |
| **a) int a;** | Correto | Declaração válida de uma variável do tipo inteiro básico. |
| **b) float b;** | Correto | Declaração válida de uma variável de ponto flutuante de precisão simples. |
| **c) double float c;** | Incorreto | Os tipos `double` e `float` são tipos primitivos distintos e não podem ser combinados. O modificador correto para precisão estendida é `long double`. |
| **d) unsigned char d;** | Correto | `unsigned` é um modificador de tipo válido aplicado ao tipo `char` (representa valores de 0 a 255). |
| **e) unsigned e;** | Correto | Em C, a palavra `unsigned` usada de forma isolada é uma forma abreviada válida para `unsigned int`. |
| **f) long float f;** | Incorreto | No padrão ANSI C, a combinação `long float` não é permitida (foi descontinuada). O correto para maior precisão é usar `double` ou `long double`. |
| **g) long g;** | Correto | Em C, a palavra `long` usada de forma isolada é uma forma abreviada válida para `long int`. |
| **h) long double h;** | Correto | `long double` é um tipo de ponto flutuante válido que oferece precisão estendida. |
