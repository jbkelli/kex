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
	//initialize data types of structure
	strcpy(book1.title, "Introduction to c programming");
	strcpy(book1.author, "John Smith");
	book1.year = 2022;
	strcpy(book1.ISBN, "9780131103627");
	book1.price = 49.99;
	
	//print structure components
	printf("Book Title: %s \n", book1.title);
	printf("Author: %s \n", book1.author);
	printf("Publication Year: %d \n", book1.year);
	printf("ISBN: %s \n", book1.ISBN);
	printf("Book Price: %.2f \n", book1.price);
	
	return 0;
}