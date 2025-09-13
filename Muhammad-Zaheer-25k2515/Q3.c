#include <stdio.h>
int main(){
	float WaterLevel; // Used to store the level of water
	printf("Enter Water Level: ");
	scanf("%f",&WaterLevel);
	
	if (WaterLevel >= 0 && WaterLevel < 2){
		printf("No Relief Required");		
	}
	else if (WaterLevel >= 2 && WaterLevel < 4){
		printf("Small Relief Package");
	}
	else if (WaterLevel >= 4 && WaterLevel < 6){
		printf("Medium Relief Package");
	}
	else if (WaterLevel >= 6){
		printf("Evacuation Required");
	}
	else{
		printf("Invalid Water Level Entered!"); // Using this to prevent people entering invalid water level
	}
	return 0;
	
}
