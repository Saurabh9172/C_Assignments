#include <stdio.h>
#include <string.h>

void reverseString(char *ptr);

int main() {
    char str[20];
    printf("Enter Any word: ");
    gets(str);
    reverseString(str);
    return 0;
}

void reverseString(char *ptr) {
    char reversed[20]; 
    int length = strlen(ptr);
    int k = 0;
    for (int j = length - 1; j >= 0; j--) {
        reversed[k] = ptr[j]; 
        k++;
    }
    reversed[k] = '\0'; 
    printf("Reverse string is: ");
    puts(reversed);
}
