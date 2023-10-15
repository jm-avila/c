#include <stdlib.h>
#include <stdio.h>

int main() {
    char env_var_name[] = "C_TEST";
    printf("reading env vars from C\n");
    printf("%s = %s\n", env_var_name, getenv("C_TEST"));
    return 0;
}