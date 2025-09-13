#include <stdio.h>
#include <string.h>
int main(){ 

	int A_M; // Used To Store Akhlaq & Manners Score
	int H_T; // Used To Store Honesty & Trustworthiness Score
	int PR; // Used To Store Prayer Regularity Score
	int F_S; // Used To Store Fasting (swam) Score
	int Z_C; // Used To Store Zakat & Charity Score
	int SB; // Used To Store Social Behavior Score
	int CRS; // Used To Store Conflict Resolution Score
	char Classification[50];
	char Remarks[50];
	float CharIndex;
	
	// Taking input from user for every attribute and storing them in the correct variable
	printf("Enter Akhlaq & Manners Score [0-10]: ");
	scanf("%d",&A_M);
	printf("Enter Honesty & Trustworthiness Score [0-10]: ");
	scanf("%d",&H_T);
	printf("Enter Prayer Regularity Score [0 = Irregular , 1 = Regular]: ");
	scanf("%d",&PR);
	printf("Enter Fasting(Swam) Score [0 = never , 1 = sometimes , 2 = always]: ");
	scanf("%d",&F_S);
	printf("Enter Zakat & Charity Score [0-10]: ");
	scanf("%d",&Z_C);
	printf("Enter Social Behavior Score [0-10]: ");
	scanf("%d",&SB);
	printf("Enter Conflict Resolution Skills Score [0-10]: ");	
	scanf("%d",&CRS);
	
	// Now we will calculate Character Index and Use IF statements to give classification and remarks
	
	CharIndex = (A_M * 2.5) + (H_T * 2.0) + (PR * 15) + (F_S * 5) + (Z_C * 1.0) + (SB * 1.0) + (CRS * 1.0);
	
	if (CharIndex>= 85 && CharIndex <= 100){
		strcpy(Classification,"Excellent Muslim Character");
		strcpy(Remarks, "Role Model For Society");
	}
	else if (CharIndex>= 70 && CharIndex <= 84){
		strcpy(Classification,"Good Muslim Character");
		strcpy(Remarks, "Practicing Believer");
	}
	else if (CharIndex>= 50 && CharIndex <= 69){
		strcpy(Classification,"Average Character");
		strcpy(Remarks, "Needs Minor Improvement");
	}
	else if (CharIndex>= 30 && CharIndex <= 49){
		strcpy(Classification,"Needs Improvement!");
		strcpy(Remarks, "Work on Akhlaq & Ibadah");
	}
	else if (CharIndex< 30){
		strcpy(Classification,"Weak Character");
		strcpy(Remarks, "Requires Serious Guidance");
	}
	else{
		printf("Error! Re-enter All Attribute Values Correctly.\n");
	}
	
	// Displaying Character Index Score, Classification and Remarks to user
	
	printf("\n=========================\n");
	printf("\n   FINAL REPORT:   \n");
	printf("\n=========================\n");
	printf("Character Index Score: %.1f\n", CharIndex);
	printf("Classification: \"%s\"\n", Classification );
	printf("Remarks: \"%s\"\n", Remarks);
	printf("\n=========================\n");
	
	return 0;
	
	
}
