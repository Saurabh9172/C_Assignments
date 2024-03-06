//print ASCII value of user entered character in decimal hex octal format and also print character for user enter ASCII value
#include <stdio.h>
int main()
{
    char c = 'k';
    printf("The ASCII value of %c is %x  ",c,c);
    printf("The ASCII value of %c is %o  ",c,c);
    printf("The ASCII value of %c is %d  ",c, c);
    return 0;
}