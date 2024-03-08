#include<stdio.h>
int factorial(int n);
int main()
{
    int num,fact;
    printf("Enter the Number: ");
    scanf("%d",&num);
    printf("Factorial of %d is %d.",num,factorial(num));
    return 0;
}
int factorial(int n)
{
    int res;
    if(n==1)
    return 1;
    else
    return res=n*factorial(n-1);
}