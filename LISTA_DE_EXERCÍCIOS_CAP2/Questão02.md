a) A biblioteca foi criada para ambientes específicos, principalmente sistemas DOS e alguns compiladores antigos, por não fazer parte do padrão oficial ANSI C. podem não estar disponíveis em sistemas modernos e pode não funcionar corretamente, não sendo adequada a utilização em projetos que precisam funcionar em diferentes plataformas.
b) A biblioteca <stdio.h> serve para a interação com entrada e saída de dados em programas C. Para a manipulação de caracteres, suas funções equivalentes e portáveis são getchar(), que aguarda o usuário digitar um caractere e pressionar ENTER, e putchar(), que exibe um caractere na tela. Também podem ser utilizadas as funções fgetc() e fputc(); no entanto, elas exigem a especificação explícita dos fluxos de entrada e saída padrão, utilizando os argumentos stdin (para leitura do teclado) e stdout (para exibição na tela). 
c) #include <stdio.h>

int main(void) {
    int c;

    do {
        c = getchar();
    } while (c == '\n');

    printf("Caractere lido: %c\n", c);

    return 0;
}
