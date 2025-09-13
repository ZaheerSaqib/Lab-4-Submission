#include <stdio.h>
int main(){
	
	float Marks; // Taking marks as a FLOAT value because marks can be given in decimals
	char Grade; // It will be used to store the grade
	printf("Enter Your Marks: ");
	scanf("%f", &Marks);
	
	if (Marks >= 85 && Marks <= 100){
		Grade = 'A';
		printf("You got %c Grade!", Grade);
	}
	else if (Marks >= 70 && Marks <= 84){
		Grade = 'B';
		printf("You got %c Grade!", Grade);
	}
	else if (Marks >= 55 && Marks <= 69){
		Grade = 'C';
		printf("You got %c Grade!", Grade);
	}
	else if (Marks >= 40 && Marks <= 54){
		Grade = 'D';
		printf("You got %c Grade!", Grade);
	}
	else if (Marks < 40){
		Grade = 'F';
		printf("You got %c Grade!", Grade);
	}
	else{
		printf("Invalid Marks! Enter Valid Marks"); // Using this to prevent students adding invalid marks
	}
	
	return 0;
}
