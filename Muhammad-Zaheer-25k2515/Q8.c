#include <stdio.h>
#include <math.h> // For Using Power Function
int main(){
	
	char OP; // For storing Operator
	int a,b; // For Storing both the values entered
	printf("Enter An Expression (eg: 5 + 10): ");
	scanf("%d %c %d", &a, &OP, &b);
	
	switch(OP){ // Using a switch statement for solving the expression
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
			if (b!=0){ // checking if b is 0 to prevent divison by zero
				printf("Answer = %d", a / b);
			}
			else{
				printf("Error! Division by zero is not possible");
			}
			break;
			
		case '%':
			if (b!=0){ // checking if b is 0 to prevent mod by zero
				printf("Answer = %d", a % b);
			}
			else{
				printf("Error! Modulus by zero is not possible");
			}
			break;
			
		case '^':
			printf("Answer = %d", int(pow(a,b))); // Using Pow function to calculate A exponent B and then converting the answer into Integer, as Pow gives answer in double format
			break;
			
		default:
			printf("Invalid Operator Entered!"); // Handling invalid operators
					
	}
	
	return 0;
	
}
