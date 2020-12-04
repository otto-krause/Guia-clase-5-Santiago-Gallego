#include<stdio.h>
#include <stdlib.h>
int main()
{
int a,b,c,d;
c=0;
d=0;
for (b=1;b<=20;b++)
{
printf("ingrese el sueldo de una persona ");
scanf("%d",&a);
if (a>2000)
{
c=c+1;
}
else
{
d=d+1;
}
}
printf("hay %d personas que ganan mas de 2000 y %d que ganan menos de 2000 " ,c,d);
return 0;
}
