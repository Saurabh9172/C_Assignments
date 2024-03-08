#include<stdio.h>
#include<stdlib.h>
int main(int arg,char *arr[])
{
    int i,j=1,a,b;
    
    for(i=1;i<arg;i++)
    {
        a=atoi(arr[j]);
        b=atoi(arr[i]);
        if(a<=b)
        j=i;
    }
    printf("Greatest number is %d.",atoi(arr[j]));
    return 0;
}