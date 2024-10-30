#include<stdio.h>
#include<stdlib.h>

int main() {
	char sentence[100];
	FILE *fptr;
	
	fptr = fopen("C:\\massvc\\data.txt","w");
	
	if(fptr==NULL){
		printf("Error accessing file");
		exit(1);
	}
	
	printf("Compose a sentence: ");
	scanf(" %[^\n]", sentence);
	
	fprintf(fptr,"%s\n", sentence);
	
	fclose(fptr);
	
	return 0;
}