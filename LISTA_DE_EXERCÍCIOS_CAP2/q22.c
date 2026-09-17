#include <stdio.h>
int main(void) {
    char ch; scanf(" %c",&ch);
    if (ch>='A' && ch<='Z') ch = ch - 'A' + 'a';
    printf("%c\n",ch);
    return 0;
}
