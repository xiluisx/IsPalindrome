#include <stdio.h>

int is_palindrome(char palabra[]) {
	int len=0, palindrome=1;

	while(palabra[len] != '\0') {
		len++;
	}

	for(int i = 0; i < len; i++) {
		if(palabra[i] != palabra[len-i-1]) {
			palindrome = 0;
			break;
		}
	}
	return palindrome;
}

int main(int argc, char *argv[])
{
	if(argc < 2) {
		printf("Not enough arguments!\n");
		return 0;
	}

	printf("%i", is_palindrome(argv[1]));
	return 0;
}
