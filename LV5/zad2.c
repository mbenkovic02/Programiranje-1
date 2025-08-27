#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int razlikaNajvINajm(int x)
{
int a,b,c,Najv=0,Najm=9;
x=abs(x);
do
{
b=x%10;
if(b<Najm) {
Najm=b;
}
if(b>Najv)
{
Najv=b;
}
x/=10;
} while (x>0);

c=Najv-Najm;
return c;
}

int main()
{
int x,r;

printf("Upisite cijeli broj: ");
scanf("%d",&x);

r=razlikaNajvINajm(x);

printf("Test(26931) : %d\n", razlikaNajvINajm(26931));
printf("%d",r);

return 0;
}