#include<stdio.h>
#include<stdlib.h>

int main() {
	char name[50];
	float marks;
	int i;
	int n;
	FILE *fptr;
	
	fptr = fopen("C:\\massvc\\Edit.txt","w");
	
	printf("Enter n(Number of students): ");
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		printf("Enter the name of student%d: ", i+1);
		scanf(" %[^\n]", &name);
		
		printf("Enter student's marks%d: ", i+1);
		scanf("%f", &marks);
		
		fprintf(fptr, "%s\n%.2f\n", name, marks);
	}
	printf("Data upload successful\n");
	
	fclose(fptr);
	
	return 0;
}