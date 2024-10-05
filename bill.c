/*Program to calculate electricity bill
Author: Alvin Maina
Date: 5th October 2024
REG No: CT102/G/24287/24
Email: 456chantalvin1@gmail.com
*/

//Basic c syntax
#include<stdio.h>
int main() {
	
	//Introduce variables
	int CustomerID;
	float UnitsConsumed, bill, Totalbill, ChargesPerUnit;
	char CustomerName[50];

	//Prompt the user to enter Name
	printf("Enter CustomerName: ");
	scanf(" %[^\n]" ,&CustomerName);
	
	//Enter the CustomerID
	printf("Enter CustomerID: ");
	scanf("%d" ,&CustomerID);
	
	//Enter the amount of UnitsConsumed
	printf("Enter UnitsConsumed: ");
	scanf("%f" ,&UnitsConsumed);
	
	//Introduce if...else statement for UnitsConsumed and ChargesPerUnit
	if(UnitsConsumed<=199){
		ChargesPerUnit = 1.20;
	}
	
	else if(UnitsConsumed>=200 && UnitsConsumed< 400){
		ChargesPerUnit = 1.50;
	}
	
	else if(UnitsConsumed>=400 && UnitsConsumed< 600){
		ChargesPerUnit = 1.80;
	}
	
	else{
		ChargesPerUnit = 2.00;
	}
	
	//Formula to calculate bill
	bill = ChargesPerUnit * UnitsConsumed;
	
	printf("The bill is %.2f\n", bill);
	
	//If...else statement for Totalbill output
	if(bill > 400){
		Totalbill = bill + (0.15 * bill);
	}
	
	else if(bill < 100){
		printf("Bill cannot be less than 100.\n");
		Totalbill = bill;
	}
	
	else{
	    Totalbill = bill;
	}
	//Output of Totalbill
	
		printf("The Totalbill is %.2f\n", Totalbill);
		
	//Display CustomerName
	printf("CustomerName is %s\n", CustomerName);
	
	//Display CustomerID
	printf("CustomerID is %d\n", CustomerID);
	
	//Display UnitsConsumed
	printf("UnitsConsumed is %.2f\n", UnitsConsumed);
	
	//Display ChargesPerUnit
	printf("ChargesPerUnit is %.2f\n", ChargesPerUnit);
	
	//Display Totalbill
	printf("Totalbill is %.2f\n", Totalbill);
	
	return 0;
}