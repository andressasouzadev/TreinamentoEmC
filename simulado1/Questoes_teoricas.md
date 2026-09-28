RESPOSTAS — QUESTÕES TEÓRICAS

Simulado PIF — Capítulos 1, 2 e 3
ADS — 2º período

Questão 01
Resposta: c) Todos os pares de nomes são diferentes para o compilador, porque C diferencia
letras maiúsculas e minúsculas.
Em C, valor, VALOR e Valor, por exemplo, são nomes diferentes. A mesma coisa acontece com
main e Main.

Questão 02
Resposta: Os três erros principais são:
1. O ponto e vírgula depois de #include &lt;stdlib.h&gt; não deve estar ali.
2. int Main() está errado. O correto é int main().
3. No printf, a mensagem precisa estar entre aspas.
Um exemplo correto para o printf seria:
printf("A idade do aluno eh: %d anos..\n", idade);
Também existe o cout &lt;&lt; endl;, que é de C++. Como o exercício é em C, pode ser usado
printf("\n");.

Questão 03
Resposta:
a = 56
b = 45
c = 13
d = 10
Primeiro, a += b + c deixa a igual a 11. Depois, c recebe 8 e b passa para 32. Na última
expressão, as atribuições são feitas da direita para a esquerda, chegando aos valores finais
acima.

Questão 04
Resposta:
a) 1
b) 1
c) 1
d) 1
e) 1
Todas as expressões são verdadeiras. Em C, o valor 1 representa verdadeiro e o 0 representa
falso.

Questão 05
a) No while, a condição é testada antes do bloco, então ele pode não executar nenhuma vez.
No do-while, o bloco executa primeiro e depois a condição é testada, então ele executa pelo
menos uma vez.
Página 1
PIF — Simulado Capítulos 1, 2 e 3
b) O for é uma boa escolha quando a repetição tem uma contagem mais definida, porque
inicialização, condição e incremento ficam juntos.
c) while (condicao); não é necessariamente erro de compilação. O ponto e vírgula deixa o
corpo do while vazio. Se a condição continuar verdadeira, o programa pode ficar preso no laço.

Questão 06
a) O erro acontece porque soma foi criada dentro do for. Ela só existe dentro daquele bloco e
não pode ser usada no printf que está fora.
b) O laço executa 1, 2, 3 e 4. Quando chega em 5, o continue pula aquela repetição. Depois
executa 6 e 7. Ao chegar em 8, o break encerra o laço.
c) Uma forma de corrigir é declarar soma antes do for:
int soma = 0;
for (i = 1; i <= 10; i++) {
    if (i == 5)
        continue;
    if (i == 8)
        break;
    soma += i * i;
}
printf("Soma final = %d\n", soma);
O resultado será 115. São somados os quadrados de 1, 2, 3, 4, 6 e 7.
