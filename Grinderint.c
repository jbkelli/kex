#include<stdio.h>
#include<stdlib.h>

int main() {
	char name[30];
	float marks;
	FILE *fptr;
	
	fptr = fopen("C:\\massvc\\grinder.txt","w");
	
	if(fptr==NULL){
		printf("Cannot access file");
		
		exit(1);
	}
	else
	{
		printf("File access successful \n");
	}
	
	printf("Enter students name: ");
	scanf(" %[^\n]", &name);
	
	printf("Enter student marks: ");
	scanf("%f", &marks);
	
	fprintf(fptr,"%s, \n%f", name, marks);
	
	
	fclose(fptr);
	
	return 0;
}
