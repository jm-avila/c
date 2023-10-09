#include <stdio.h>

int main() {
	int num;
	printf("Enter an integer: ");
	scanf("%d", &num);
	
	// true if num is perfectly divisible by 2i
	if (num % 2 == 0) 
		printf("%d is even", num);
	else
		printf("%d is odd", num);

	return 0;
}
