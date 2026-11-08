/* Operadores relacionais: realizam comparações que retornam um valor verdadeiro ou falso
retorna verdadeiro == 1 e falso == 0
operadores ( <, <=, >, >=, ==, !=) 
*/

#include<stdio.h>

void main(){
  int a = 1, b = 2;

//menor que
  printf("a < b : %i\n", a < b);
//maior que
  printf("a > b : %i\n", a > b);
//menor ou igual que    
  printf("a <= b : %i\n", a <= b);
//maior ou igual que   
  printf("a >= b : %i\n", a >= b);
//equivalente   
  printf("a == b : %i\n", a == b);
//diferente
  printf("a != b : %i\n", a != b);
}

/*Operadores lógicos: 
negação: ~ ! - inverte o valor lógico
E: ^ && - precisa que os dois sejam verdadeiros para sentença ser verdadeira
OU: v || - pelo menos um dos valores sendo verdadeiro, torna a sentença verdadeira
*/

/* Ordem de precedência dos operadores, da maior para a menor prioridade

1. Parênteses ( )
2. Pós-fixados / Incremento e decremento pós-fixado ++, --, chamadas de função (), acesso a membros .
3. Pré-fixados e unários +, -, ++, --, !, ~ (ex: negação lógica ou bit a bit)
4. Multiplicação, Divisão e Módulo/Resto *, /, %
5. Adição e Subtração +, -
6. Deslocamento de bits <<, >>, >>>
7. Relacionais (Comparação) <, <=, >, >=
8. Igualdade e Desigualdade ==, !=, ===, !==
9. Operadores Bit a Bit & (AND), ^ (XOR), | (OR)
10. Lógicos && (AND lógico), || (OR lógico)
11. Condicional (Ternário) ? :
12. Atribuição =, +=, -=, *=, /=

*/
