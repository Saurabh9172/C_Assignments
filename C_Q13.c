#include <stdio.h>
#include <string.h>

int main() {
    // Declare and initialize an array of strings
    char* strings[] = {"apple", "banana", "apple", "orange", "banana", "grape", "apple"};
    int numStrings = sizeof(strings) / sizeof(strings[0]);

    // Check for duplicates
    for (int i = 0; i < numStrings - 1; i++) {
        for (int j = i + 1; j < numStrings; j++) {
            if (strcmp(strings[i], strings[j]) == 0 && i != j) {
                printf("Duplicate string: %s\n", strings[i]);
                break; // Only print the duplicate once
            }
        }
    }

    return 0;
}
