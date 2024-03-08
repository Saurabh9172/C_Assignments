#include<stdio.h>
void binaryNumber(int num);
void hexadecimalNumber(int num);
void octalNumber(int num);
int main()
{
    int num;
    printf("Enter the integer: ");
    scanf("%d",&num);
    if(num<0)
    {
          num=-num;
          printf("we use absolute number.\n");
    }
    binaryNumber(num);
    hexadecimalNumber(num);
    octalNumber(num);
}
void binaryNumber(int num)
{
    int i=0;
    int binary[32];
    while(num>0)
    {
        binary[i++]=num%2;
        num/=2;
    }
    printf("\nBinary Number is: ");
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",binary[j]);
    }
}
void hexadecimalNumber(int num)
{
    int i=0;
    int hexa[16];
    while(num>0)
    {
        hexa[i++]=num%16;
        num/=16;
    }
    printf("\nHexadecimal Number is: ");
    for(int j=i-1;j>=0;j--)
    {
       
        if(hexa[j]>10)
          printf("%c",'A'+(hexa[j]-10));
        else
          printf("%d",hexa[j]);
    }
}
void octalNumber(int num)
{
    int i=0;
    int octal[24];
    while (num>0)
    {
        octal[i++]=num%8;
        num/=8;
    }
    printf("\nOctal number is: ");
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",octal[j]);

    }
    
}