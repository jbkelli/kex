#include<stdio.h>
#include<stdlib.h>

int main() {
	char sentence[100];
	FILE *fptr;
	
	fptr = fopen("C:\\massvc\\data.txt","r");
	
	if(fptr==NULL){
		printf("Error accessing file");
		exit(1);
	}
	
	
	fscanf(fptr," %[^\n]", sentence);
	
	printf("%s\n", sentence);
	
	fclose(fptr);
	
	return 0;
}