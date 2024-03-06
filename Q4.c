#include<stdio.h>
int main()
{
    int arr[5];
    printf("Enter the marks for each subject out of 20.\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>20 || arr[i]<0)
       { 
        printf("Invalid Marks.\nEnter Again: ");
        i--;
        continue;
       }
    }
   
    int j=0;
    for(int i=0;i<5;i++)
    j=j+arr[i];
   
    if(j>=90)
    printf("Excellent");
    else if(90>=j>=80)
    printf("Grade A");
    else if(80>=j>=70)
    printf("Grade B");
    else if(70>=j>=60)
    printf("Grade C");
    else
    printf("Grade F");
}
        
    
    