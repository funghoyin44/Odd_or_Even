#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	printf("Please eneter a value: ");
	int input;
	scanf("%d", &input);
	if (input % 2 == 0) {
		printf("%d is an even number.\n", input);
	}
	else {
		printf("%d is a odd number.\n", input);
	}
}