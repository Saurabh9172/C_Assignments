#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 10
#define MAX_NAME_LENGTH 50

// Comparison function for qsort
int compareStrings(const void *a, const void *b) {
    return strcmp((const char *)a, (const char *)b);
}

int main() {
    char nameOfStudents[MAX_STUDENTS][MAX_NAME_LENGTH];
    int numStudents;
    
    printf("Enter the number of students (up to %d): ", MAX_STUDENTS);
    scanf("%d", &numStudents);
    getchar(); // consume the newline character
    
    if (numStudents > MAX_STUDENTS || numStudents < 1) {
        printf("Invalid number of students.\n");
        return 1;
    }
    
    // Read student names
    printf("Enter the names of the students:\n");
    for (int i = 0; i < numStudents; ++i) {
        fgets(nameOfStudents[i], MAX_NAME_LENGTH, stdin);
        // Remove the trailing newline character
        nameOfStudents[i][strcspn(nameOfStudents[i], "\n")] = '\0';
    }
    
    // Sort the array of student names
    qsort(nameOfStudents, numStudents, sizeof(nameOfStudents[0]), compareStrings);
    
    // Display the sorted list of names
    printf("\nSorted list of names:\n");
    for (int i = 0; i < numStudents; ++i) {
        printf("%s\n", nameOfStudents[i]);
    }
    
    return 0;
}
