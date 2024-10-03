//Program to input user data
/*Program to input user data
Author: Alvin Maina
Date: 24th September 2024
REF no: EE110/G/24287/24
*/ 

#include<stdio.h>
int main () {
	//Group according to data type
	
	char character, name;
	
	int age;
	
	float salary;
	
	double budget;
	
	//Enter the character of choice
	
	printf("Enter the character: ");
	scanf("%c", &character);
	
	//Enter user's name
	
	printf("Enter the name: ");
	scanf("\n%s", &name);
	
	//Enter user's age
	
	printf("Enter the age: ");
	scanf("\n%d", &age);
	
	//Enter user's monthly salary
	
	printf("Enter the salary (monthly): ");
	scanf("\n%f", &salary);
	
	//Enter user's monthly target budget
	
	printf("Enter the budget (monthly): ");
	scanf("\n%lf", &budget);
	
	return 0;
	
}