/*program to loop using for
Author: Mwangi Alvin Maina
Date: 6th October 2024
REG NO: CT102/G/24287/24
*/

#include<stdio.h>
int main() {
	int i;
	int sum = 0;
	int start, stop;
	
	//Enter where to start
	printf("Enter starting point: ");
	scanf("%d", &start);
	
	//Enter stopping point
	printf("Enter the end point: ");
	scanf("%d", &stop);
	
	//Introduce the loop
		for(i=start;i<=stop;i++) {
		printf("%d \n", i);
		
		//Formula for calculating sum
		sum = sum + i;
	}
	printf("The sum is %d", sum);
	
	return 0;
}