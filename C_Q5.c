#include<stdio.h>
void checkChar(char ch);
char acceptChar();
int main()
{
    char ch= acceptChar();
     checkChar(ch);
}
char acceptChar()
{
    char ch;
    printf("Enter the Character: ");
    scanf("%c",&ch);
    return ch;
}
void checkChar(char ch)
{
    if(65<=ch && ch<=90)
    printf("This is upper case letter which is '%c'",ch);
    else if(97<=ch && ch<=122)
    printf("This is lower case letter which is '%c'",ch);
    else if(48<=ch && ch<=57)
    printf("This is integer(0-9) which is '%c'",ch);
    else
    printf("This is symbol which is '%c'",ch);
}