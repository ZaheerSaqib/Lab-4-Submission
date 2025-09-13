#include <stdio.h>
int main(){
	int number;
	printf("Enter a Number: ");
	scanf("%d", &number);
	
	if (number % 2 == 0){ // using MOD function to check if number is even or odd
		printf("\"%d\" is an even number", number);
	}
	else{
		printf("\"%d\" is an odd number", number);
	}
	return 0;
}	