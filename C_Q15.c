#include<stdio.h>
#include<string.h>

#define ALPHABET_SIZE 26

int is_alpha(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

char to_lower(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}

void countAlphabets(const char *str, int *counts) {
    while (*str) {
        if (is_alpha(*str)) {
            counts[to_lower(*str) - 'a']++;
        }
        str++;
    }
}

int main() {
    char str[100];
    int counts[ALPHABET_SIZE] = {0}; 
    printf("Input a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the trailing newline character if present
    str[strcspn(str, "\n")] = '\0';

    countAlphabets(str, counts);

    printf("Output:\n");
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (counts[i] > 0) {
            printf("%c : %d\n", 'A' + i, counts[i]);
        }
    }

    return 0;
}
