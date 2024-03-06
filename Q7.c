#include <stdio.h>
#include<stdlib.h>
int main(int args,char *arg[])
{
    if(args!=2)
     {
         printf("Sorry we can not access");
         return 0;
     }
     int num=atoi(arg[1]);
     for(int i=1;i<=10;i++)
     printf("%3d * %-2d = %d\n",num,i,num*i);
     return 0;
}