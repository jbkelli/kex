#include<stdio.h>
int main(){
	int i;
	int stop;
	int sum = 0;
	
	printf("Enter the starting point: ");
	scanf("%d", &i);
	
	printf("Enter the end point: ");
	scanf("%d", &stop);
	
	while(i<=stop) {
		i++;
		
		
		sum = sum + i;
	}
	
	printf("The sum is %d \n", sum);
	
	return 0;
}