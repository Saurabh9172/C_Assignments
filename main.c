#include <stdio.h>

int main(void)
{
int a,b,c;
a=printf("\t \"SunBeam\" - \t'IT Park' \t");
b=printf("\t \'Pune\' \t");
c=printf("\n a = %d",a)+ ++b;
printf(" c = %d",c);
return 0;
}