#include<stdio.h>
void acceptArray(int arr[][10],int r,int c);
void arrayMultiplication(int arr[][10],int ptr[][10],int r,int c);
void printArray(int mul[][10],int r,int c);
int main()
{
   int r,c,arr[10][10],ptr[10][10];
    printf("Enter the Rows: ");
    scanf("%d",&r);
    printf("Enter the Columns: ");
    scanf("%d",&c);
    printf("Enter the First matrix elements:\n");
    acceptArray(arr,r,c);
    printf("Enter the Second matrix elements:\n");
    acceptArray(ptr,r,c);
    arrayMultiplication(arr,ptr,r,c);

}
void acceptArray(int arr[][10],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        scanf("%d",&arr[i][j]);
    }  
}
void arrayMultiplication(int arr[][10],int ptr[][10],int r,int c)
{
     int mul[10][10];
      for(int i=0;i<r;i++)
      {
         for(int j=0;j<c;j++)
         {
             mul[i][j]=0;
             for(int k=0;k<c;k++)
             mul[i][j]+=arr[i][k]*ptr[k][j];
         }
      }
     printArray(mul,r,c);
}
void printArray(int mul[][10],int r,int c)
{
   printf("Multplication of Two Array is:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%-5d",mul[i][j]);
        }
        printf("\n");
    }
}