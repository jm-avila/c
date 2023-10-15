#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int arraySize = 3;
    int* p = (int *) malloc(arraySize*sizeof(int));
    p[0] = 5;
    p[1] = 4;
    printf("The pointer is %p\n", p);
    printf("The values at i=0 %d and  i=1 %d\n", p[0], p[1]);
    printf("The value at i=2 %d\n", p[3]);
    free(p);
    return 0;
}