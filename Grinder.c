#include<stdio.h>
#include<stdlib.h>

int main() {
	char name[30];
	float marks;
	FILE *fptr;
	
	fptr = fopen("C:\\massvc\\grinder.txt","r");
	
	if(fptr==NULL){
		printf("Cannot access file");
		
		exit(1);
	}
	else
	{
		printf("File access successful \n");
	}
	
	//printf("Enter students name: ");
	//scanf(" %[^\n]", &name);
	
	//printf("Enter student marks: ");
	//scanf("%f", &marks);
	
	fscanf(fptr," %[^\n] %f", name, &marks);
	
	printf("\nName: %s \n", name);
	printf("Marks: %.2f", marks);
	
	fclose(fptr);
	
	return 0;
}
