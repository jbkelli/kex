#include<stdio.h>
#include<time.h>
int main () {
	int bookID;
	int duedate;
	int returndate;
	
	printf("Enter the bookID: ");
	scanf("%d", &bookID);
	
	printf("Enter the duedate(Format dd/mm/yyyy): ");
	scanf("%d", &duedate);
	
	printf("Enter the returndate(Format dd/mm/yyyy): ");
	scanf("%d", &returndate);
	
	int daysoverdue = returndate - duedate;
	
	printf("The daysoverdue is %d" ,daysoverdue);
	
	if(daysoverdue <= 7) {
		printf("\nChargeperday = 20");
	}
	
	else if(daysoverdue > 7 <= 14) {
		printf("\nChargeperday = 50");
	}
	
	if(daysoverdue >= 15) {
		printf("\nChargeperday = 100");
	}
	
	return 0;
}