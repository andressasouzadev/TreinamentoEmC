/* No pre incremento (soma 1) e pre-decremento (subtrai 1) O valor da variável é alterado (somado ou subtraído em 1) antes de ser utilizado na expressão ou comando.
exemplo: 
int n = 5;
int y = ++n; 
n vira 6 e y recebe 6
Ao final: y = 6, n = 6
*/

/* No pos-incremento e pos-decremento o valor atual da variável é utilizado primeiro na expressão, e depois (logo em seguida) ela é incrementada ou decrementada.
exemplo:
int n = 5;
int x = n++;
x recebe o valor atual de n (5)
n vira 6
Ao final: x = 5, n = 6
*/

#include<stdio.h>

void main(){
  int a = 5, b = 5, c = 5, d = 5;
//pre-incremento   
  printf("Pre-incremento %d \n", ++a);
 
//pos-incremento
  printf("Pos-incremento %d \n", b++);

 //pre-decremento
  printf("Pre-decremento %d \n", --c);
    
 //pos-decremento
  printf("Pos-decremento %d \n", d--);
    
    
  printf("valores finais %i %i %i %i \n", a,b,c,d);
}

/* Para alterações de valores maiores que 1 e outros operadores, utiliza-se o sinal do operador junto com o de igualdade que indica atribuição
exemplo:
int a = 2;
int a += 2;
int a = 4;
*/
