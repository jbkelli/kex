//Program to evaluate loan eligibility from various users
/*Program to evaluate loan eligibility from various users
Author: Alvin Maina Mwangi
Date: 29th September 2024
*/

//Introduce the basic C outline
#include<stdio.h>
int main () {
	
	//Assign the various data types
	int age;
	double income;
	
	//Print statement to enquire age details from the user
	printf("Enter your age: ");
	scanf("%d", &age);
	
	//Print a statement to enquire annual income details from the user
	printf("Enter your income(annual): ");
	scanf("%lf", &income);
	
	//Introduce if statement to group data according to required specifications
	if(age >= 21 && income >= 21000) {
		
		//Print the result if the required specifications are met
		printf("Congratulations, you qualify for a loan.\n");
	}
	
	else{
		
		//Print the result if the required specifications are not met
		printf("Unfortunately, we are unable to offer you a loan at this time.\n");
	}
	
	return 0;
}