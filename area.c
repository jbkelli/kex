//Program to calculate area of a triangle
/*Program to calculate area of a triangle
Author: Alvin Maina
Date: 24/09/2024
REF no: EE110/G/24287/24
*/

#include<stdio.h>

int main () {
	//Assign the values for the base and the height of the triangle
	
	int base = 8;
	int height = 6;
	
	//Formula for calculating area of triangle
	
	int area = (0.5) * (base * height);
	
	//Print the output
	
	printf("Area of the triangle = %d" ,area);
	
	return 0;
}