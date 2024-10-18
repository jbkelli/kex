/*structure
Author: Alvin Maina Maina
Date: 18th October 2024
REG no: CT102/G/24287/24

*/
#include<stdio.h>
#include<string.h>

//structure book
struct book{
	char title[30];
	char author[30];
	int year;
	char ISBN[13];
	float price;
}book1;

int main() {
	printf("Enter the book title: ");
	scanf(" %[^\n]", &book1.title);
	
	printf("Enter book author: ");
	scanf(" %[^\n]", &book1.author);
	
	printf("Enter the publication year: ");
	scanf("%d", &book1.year);
	
	printf("Enter book's ISBN: ");
	scanf("%s", &book1.ISBN);
	
	printf("Enter the book price: ");
	scanf("%f", &book1.price);
	
	
	printf(" \nBook Title: %s \n", book1.title);
	printf("Book Author: %s \n", book1.author);
	printf("Publication Year: %d \n", book1.year);
	printf("ISBN: %s \n", book1.ISBN);
	printf("Book Price: %.2f \n", book1.price);
	
	return 0;
}