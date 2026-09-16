#include <stdio.h>
int main(void) {
    int h,m,s,duracao,total;
    scanf("%d %d %d %d",&h,&m,&s,&duracao);
    total=(h*3600+m*60+s+duracao)%(24*3600);
    h=total/3600; m=(total%3600)/60; s=total%60;
    printf("%02d:%02d:%02d\n",h,m,s);
    return 0;
}
