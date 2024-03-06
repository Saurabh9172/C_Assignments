//write a program to accept a number and print number in character decimal octal and hexadecimal format
#include <stdio.h>
 
int main()
{
    int value=1994;
    printf("Charecter value is:%c\n",value); 
    printf("Decimal value is: %d\n",value);
    printf("Octal value is: %o\n",value);
    printf("Hexadecimal value is (Alphabet in small letters): %x\n",value);
    printf("Hexadecimal value is (Alphabet in capital letters): %X\n",value);
     
    return 0;   
}