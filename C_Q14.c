#include <stdio.h>
#include <stdbool.h>
#include <string.h>



bool isLetter(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}


char toLower(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}


bool isPalindrome(const char *str) {
    int length = strlen(str);
    int i = 0, j = length - 1;

    while (i < j) {
        
        while (i < j && !isLetter(str[i])) {
            i++;
        }
       
        while (i < j && !isLetter(str[j])) {
            j--;
        }
       
        if (toLower(str[i]) != toLower(str[j])) {
            return false;
        }
        
        i++;
        j--;
    }
    
    return true;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the trailing newline character
    str[strcspn(str, "\n")] = '\0';

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
