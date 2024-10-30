#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[30];
    float marks;
    FILE *fptr;
    int i;

    // Open the file in write mode
    fptr = fopen("students.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!");
        exit(1);
    }

    // Collect and write data for 5 students
    for(i = 0;i < 5;i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf(" %[^\n]", name);  // Read full name including spaces

        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &marks);

        // Write to file in the format: Name Marks
        fprintf(fptr, "%s %.2f\n", name, marks);
    }

    printf("Data successfully written to file.\n");

    // Close the file
    fclose(fptr);

    return 0;
}
