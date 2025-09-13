#include <stdio.h>
int main(){
	char operator; // For storing Operator
	int a,b; // For Storing both the values entered
	printf("Enter An Expression (eg: 15-7): ");
	scanf("%d %c %d", &a, &operator, &b);
	
	switch(operator){ // Using a switch statement for solving the expression
		case '+':
			printf("Answer = %d", a + b);
			break;
		case '-':
			printf("Answer = %d", a - b);
			break;
		case '*':
			printf("Answer = %d", a * b);
			break;
		case '/':
			if (b!=0){ // checking if b is 0, because if it is 0, the answer will be infinity
				printf("Answer = %d", a / b);
			}
			else{
				printf("Error! Division by zero is not possible");
			}
			break;
		default:
			printf("Invalid Operator Entered!"); 
					
	}
	
	return 0;
	
}
