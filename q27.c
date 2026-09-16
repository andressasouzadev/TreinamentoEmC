#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
    srand((unsigned)time(NULL));
    printf("%d %d %d\n", rand()%6+1, rand()%6+1, rand()%6+1);
    return 0;
}
