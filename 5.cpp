#include<stdio.h>
#include<stdlib.h>
int main(){
float Nt,N1,N2,N3,N4,N5,N6,N7,N8,N9,N10,Np,a,c;
a=0;
int b;
for (b=1; b<=30; b++){
printf("ingrese las 10 notas");
scanf("%f %f %f %f %f %f %f %f %f %f",N1,N2,N3,N4,N5,N6,N7,N8,N9,N10);
Nt=N1+N2+N3+N4+N5+N6+N7+N8+N9+N10;
Np=Nt/10;
printf("el promedio del alumno es %f \n",Np);
}
c=a/30;
printf("el promedio de la clase es %f \n",c);
return 0;
}
