#include <stdio.h>
#include <stdlib.h>

int main() {
    char sentence[100];
    FILE *fptr;

    // Open the file in append mode
    fptr = fopen("C:\\massvc\\data.txt", "a");
    if (fptr == NULL) {
        printf("Error accessing file");
        exit(1);
    }

    printf("Compose a sentence: ");
    scanf(" %[^\n]", sentence);  // Read full sentence including spaces

    fprintf(fptr, "%s\n", sentence);  // Write sentence to file

    fclose(fptr);

    printf("Sentence successfully appended to file.\n");

    return 0;
}
