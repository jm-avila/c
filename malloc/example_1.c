#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int* p = (int *) malloc(sizeof(int));
    *p = 5;
    printf("The pointer is %p\n", p);
    printf("The value is %d\n", *p);
    free(p);
    return 0;
}