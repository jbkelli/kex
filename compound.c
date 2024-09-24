//Program to calculate compound interest
/*Program to calculate compound interest
Author: Alvin Maina Mwangi
Date: 24th September 2024
REG No. EE110/G/24287/24
*/

//Include the basic functions of c

#include<stdio.h>

//Include the math library

#include<math.h>

//Create a main function

int main () {
	int principle, time, rate, CI, A;
	
	//Use float as a specification of the value of n
	
	float n;
	
	//Obtain principle amount from the user
	
	printf("Enter the principle: ");
	scanf("%d" ,&principle);
	
	//Obtain the time in years from the user
	
	printf("\nEnter the time(in years): ");
	scanf("%d" ,&time);
	
	//Obtain the rate of interest per annum
	
	printf("\nEnter the rate(per annum): ");
	scanf("%d" ,&rate);
	
	//Obtain the value n of which the rate is compounded
	
	printf("\nEnter the n(compounded time in an year): ");
	scanf("%f" ,&n);
	
	//The formula for calculating compound interest
	
	CI = (A = principle * pow( (1 + rate / (100 * n) ), time * n) ) - principle;
	 
	 //Execute the final output
	 
	printf("CI = %d", CI);
	
	
	return 0;
	
	
}