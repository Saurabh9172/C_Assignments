#include<stdio.h>
void fibonacci(int n);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Fibonacci series of %d numbers is ",num);
    fibonacci(num);
}
void fibonacci(int n)
{
    int a=0,b=1,c,j;
    if(n==1)
    printf("%d",a);
    else if(n==2)
    printf("%d, %d",a,b);
    // else if(n==3)
    // printf("%d, %d, %d",a,b,a+b);
    else
    {
        printf("%d, %d",a,b);
        for(j=3;j<=n;j++)
        {
            c=a+b;
            printf(", %d",c);
            a=b;
            b=c;
        }
        
    }
    
   
    

}