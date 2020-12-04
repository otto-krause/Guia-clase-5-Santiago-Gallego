
#include<stdio.h>
#include<stdlib.h>
int main()
{
int a;
float n1,n2,c,d;
for (a=1; a<=15; a++)
{
printf("ingrese el numero\n");
scanf("%f",&n1);
d=d+n1;
if (n1>n2)
{
n2=n1;
}
}
c=d/15;
printf("el promedio es %f\n",c);
printf("el numero mayor es %f\n",n2);
return 0;
}
