//Program to run do...while loop
/*Program to run do...while loop
Author: Alvin Maina
Date:  7th October 2024
REG NO: CT102/G/24287/24
*/
#include<stdio.h>
int main() {
	int i;
	int stop;
	int sum = 0;
	
	printf("Enter the starting point: ");
	scanf("%d", &i);
	
	printf("Enter the end point: ");
	scanf("%d", &stop);
	
	do{
		printf("%d \n" ,i);
		sum = sum + i;
		i++;
	}
	while(i<=stop);
	
	printf("The sum is %d" ,sum);

	return 0;
}