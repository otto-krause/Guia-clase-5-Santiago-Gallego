#include<stdio.h>
#include<stdlib.h>
int main(){
int a,b,c,d,e;
for (a=1; a<=10; a++){
printf("ingrese un numero");
scanf("%d",&e);
if (e>0){
b=b+1;
}
else{
if(e==0){
c=c+1;
}
else{
d=d+1;
}
}
}
printf("hay %d positivos, %d ceros y %d negativos\n",b,c,d);
return 0;
}
