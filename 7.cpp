#include<stdio.h>
#include<stdlib.h>
int main(){
int a,b,c,d,e,f;
for (a=1; a<=20; a++){
for (a=1; a<=15; a++){
printf("ingrese la venta del dia \n %d",a);
scanf("%d",&b);
c=c+b;
if (d<b){
d=b;
f=a;
}
}
printf("La venta en total del vendedor %d es %d ",a,c);
e=e+c;
}
printf("La venta en general es %d ,la mejor venta fue hecha por el vendedor &d ",e,f,d); 
return 0;
}
