#include<stdio.h>

void main(){
  int idade;
  float altura;
  char letra_favorita;

/*para adicionar um valor á uma variável podemos indicar onde deverá ser gravado esse valor, usando o & e em seguida o nome da variável*/
  printf("Qual a sua idade?\n");
  scanf(" %i", &idade);
  printf("Qual a sua altura?\n");
  scanf(" %f", &altura);
  printf("Qual a sua letra favorita?\n");
  scanf(" %c", &letra_favorita);

/* Ao colocar %c estamos indicando que o valor que será armazenado é do tipo char, o mesmo ocorre com os outros*/
    
  printf("A sua idade é: %i\n"\
  "A sua altura é: %f\n"\
  "A sua letra favorita é: %c\n"\
, idade, altura, letra_favorita); // para acessar o conteúdo da variável
}
  
/* %p foi criado para imprimir endereços da memória ram e o %x foi projetado para exibir inteiros sem sinal em formato hexadecimal*/


