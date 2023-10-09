#include <stdio.h>

int main() {
	FILE * ftpr;

	// Open a file in read mode
	ftpr = fopen("file.txt", "r");

	// Store the content of the file
	char myString[100];

	// Read the content and sotre it inside myString
	fgets(myString, 100, ftpr);

	// Print file content
	printf("%s", myString);

	// Close the file
	fclose(ftpr);
	
	return 0;
}
