#include <stdio.h>

char strA[40] = "Hello Friend!";
char strB[40];

char *my_strcpy(char *destination, const char *source) {
	char *p = destination;
	while (*source != '\0') {
		*p++ = *source++;
	}
	*p = '\0';
	return destination;
}

int main() {
	my_strcpy(strB, strA);
	puts(strB);
	return 0;
}

