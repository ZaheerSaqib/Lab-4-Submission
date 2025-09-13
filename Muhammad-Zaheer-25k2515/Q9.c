#include <stdio.h>
#include <string.h>
int main(){
	
	float Rainfall;
	float RiverFlow;
	char RiskLevel[40]; // Creating an empty char array to store string value
	
	
	printf("Enter The Amount Of Rainfall(in mm): "); // Taking Amount of rainfall from user
	scanf("%f",&Rainfall); 
	printf("Enter The Amount Of Riverflow(in m³/s): "); // Taking Amount of riverflow from user
	scanf("%f",&RiverFlow);
	
	if (Rainfall<50 && RiverFlow<200){
		strcpy(RiskLevel, "Low Risk"); // Assigning string value to the char array
		
	}
	else if (Rainfall>=50 && Rainfall<100 && RiverFlow>=200 && RiverFlow<500){
		strcpy(RiskLevel, "Moderate Risk");
		
	}
	else if (Rainfall>=100 && Rainfall<=150 && RiverFlow>=500 && RiverFlow<=800){
		strcpy(RiskLevel, "High Risk");
		
	}
	else if (Rainfall>150 && RiverFlow>800){
		strcpy(RiskLevel, "Severe Risk - Evacuate!");
		
	}
	else{
		printf("Invalid Rainfall/RiverFlow entered. Try again!"); // validation check
	}
	printf("%s\n", RiskLevel);
	
	return 0;
}