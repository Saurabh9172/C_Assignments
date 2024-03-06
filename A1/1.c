//WRITE A PROGRAM TO ACCEPT TWO NUMBERS. FIND IT'S SUM, DIFFERENCE AND PRODUCT.
// #include <stdio.h>
// int main()
// {    
//    int num1, num2, sum;
//    printf("Enter two integers: ");
//    scanf("%d %d", &num1, &num2);
//    // calculating sum
//    sum = num1 + num2;      
//    printf("%d + %d = %d", num1, num2, sum);
//    return 0;
// }

// #include <stdio.h>
// int main()
// {    
//    int num1, num2, diff;
//    printf("Enter two integers: ");
//    scanf("%d %d", &num1, &num2);
//    diff = num1 - num2;      
//    printf("%d - %d = %d", num1, num2, diff);
//    return 0;
// }

#include <stdio.h>
int main()
{    
   int num1, num2, prod;
   printf("Enter two integers: ");
   scanf("%d %d", &num1, &num2);
   prod = num1 * num2;      
   printf("%d * %d = %d", num1, num2, prod);
   return 0;
} 