#include <stdio.h>

void main() {

	int num;
	
	printf("Enter a number: ");
	scanf("%d", &num);

	for (int i = 0; i < num; i++){
		if (num % 2 == 0){
			printf("%d is not prime number", num);
			break;
		} else
			printf("%d is a prime number\n", num);
	}
}
