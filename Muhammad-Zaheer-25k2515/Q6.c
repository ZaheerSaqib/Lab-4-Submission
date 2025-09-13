#include <stdio.h>
int main(){
	int num1;
	int num2;
	int num3;
	
	printf("Enter Three Numbers: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	if (num1 > num2 && num1 > num3){ // Checking if number 1 is largest
		printf("%d is the largest number", num1);	
	}
	else if (num2 > num1 && num2 > num3){ // Checking if number 2 is largest
		printf("%d is the largest number", num2);	
	}
	else if (num3 > num1 && num3 > num2){ // Checking if number 3 is largest
		printf("%d is the largest number", num3);	
	}
	
	return 0;
}
