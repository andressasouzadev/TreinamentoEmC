#include<stdio.h>

void main(){
    /*usado para escrever comentários maiores que serão ignorados pelo compilador*/
    //outra forma de escrever comentarios curtos

    /*declaração de variáveis identifica o tipo de variável como: char, int, float e outras*/

    //caracteres
    char nome_da_variável = 'a';
    unsigned char nome_da_variável = 'a'; //não armazena números negativos

    //números inteiros
    short int nome_da_variável = 10;
    int idade = 20;
    long int nome_da_variável = 100000; 
    unsigned short int nome_da_variável = 10; //não armazena números negativos

    //números reais
    float nome_da_variável = 1,5;
    double nome_da_variável = 1,18;
    long double nome_da_variável = 1,52863  

    /*Para nomear a variável iniciar com letra ou underscore, em seguida pode usar números*/

    //constante nomeada
    const int MAX = 100; //não pode ser alterada durante a execução do programa

    /*Para imprimir o conteúdo de uma variável
    printf("texto %c texto %d", nome_da_variável1, nome_da_variável2); %c para char e %d ou %i para inteiro */
    
    /*Para quebra de linha usa-se \n dentro das aspas*/
