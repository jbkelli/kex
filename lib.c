//Program to calculate fineamount
#include<stdio.h>
#include<time.h>
int main () {
	int bookID;
	int duedate;
	int returndate;
	float finerate, fineamount;
	
	
	printf("Enter the bookID: ");
	scanf("%d", &bookID);
	
	printf("Enter the duedate: ");
	scanf("%d", &duedate);
	
	printf("Enter the returndate: ");
	scanf("%d", &returndate);
	
	int daysoverdue = returndate - duedate;
	
	printf("The daysoverdue is %d" ,daysoverdue);
	
	if(daysoverdue <= 7) {
	finerate = 20;
	}
	
	else if(daysoverdue > 7 <= 14) {
	finerate = 50;
	}
	
	else{
	finerate = 100;
	}
	
	fineamount = daysoverdue * finerate;
	
	printf("\nbookID: %d", bookID);
	printf("\nduedate: %d", duedate);
	printf("\nreturndate: %d", returndate);
	printf("\nfinerate: %f", finerate);
	printf("\nThe fineamount is %f" ,fineamount);
	
	return 0;
}