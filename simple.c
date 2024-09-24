//Program to calculate simple interest
/*program to calculate simple interest
Author: Alvin Maina
Date: 22/09/2024
REF no: EE110/G/24287/24
*/

#include<stdio.h>
int main () {
	//Calculate the simple interest
	int principle, rate, time, interest;
	
	//Insert the principle amount
	printf("Enter the principle: ");
	scanf("%d", &principle);
	
	//Insert the rate per annum
	printf("Enter the rate(per annum): ");
	scanf("%d", &rate);
	
	//Insert the time in years
	printf("Enter the time(years): ");
	scanf("%d", &time);
	
	//The formula to be used by program
	interest = (principle * rate * time) / 100;
	printf("The simple interest is %d" ,interest); 
	
	return 0;
}