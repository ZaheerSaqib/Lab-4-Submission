#include <stdio.h>
int main(){
	
	int URate; // Used to store unit rate
	float UConsumed; // Used to store amount of units used
	
	printf("Enter The Amount Of Units Used: ");
	scanf("%f", &UConsumed );
	
	if (UConsumed >0 && UConsumed<=100){
		URate = 10;
		printf("Total Bill = %.2f PKR", URate * UConsumed);
	}
	else if (UConsumed >=101 && UConsumed<=300){
		URate = 15;
		printf("Total Bill = %.2f PKR", URate * UConsumed);
	}
	else if (UConsumed >=301 && UConsumed<=500){
		URate = 20;
		printf("Total Bill = %.2f PKR", URate * UConsumed);
	}
	
	else if (UConsumed>500){
		URate = 25;
		printf("Total Bill = %.2f PKR", URate * UConsumed);
	}
	else{
		printf("Invalid Amount of Units Entered!"); // using a validation check to prevent invalid amount of units entered
	}
	
	return 0;
}