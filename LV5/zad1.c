#include<stdio.h> 
#include<stdlib.h> 
#include<math.h>
double funkcijaY(double x1,double x2,double x3){
return pow(x1,3)-((x1*x3)/(fabs(x2)+pow(10,-3)))+5*pow(x3,2);
}

int main()
{
double x1,x2,x3,r;

printf("Upisite 3 broja : \n");
scanf("%lf %lf %lf",&x1,&x2,&x3);

r= funkcijaY(x1,x2,x3);
printf("Test( 1.2, −4.1 i 2.825) : %lf\n",funkcijaY(1.2,-4.1,2.825));
printf("Y= %lf",r);
}