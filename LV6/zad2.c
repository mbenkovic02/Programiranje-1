/* 
Omoguciti korisniku unos 3 ´ < m ≤ 18 elemenata u polje cijelih brojeva. Odrediti i
na ekran ispisati broj s najvecim zbrojem znamenki. Koristiti pokaziva ´ cku notaciju ˇ
za pristup elementima polja */
#include<stdio.h> 
#include<stdlib.h>
int main()
{
int m,x,zbrojZNM,y,NajvZbroj=0,z;
int *p;

printf("Upisite broj elemenata polja(3 < m <= 18): ");
do
{
scanf("%d",&m);
} while (m<=3 || m>18);

int polje[m];
p=polje;

for(x=0;x<m;x++) 
{
printf("Upisite %d. element polja: ",x+1);
scanf("%d",p+x);
}

for(x=0;x<m;x++) 
{
zbrojZNM=0;
y=*(p+x);
do
{
zbrojZNM+=y%10;
y/=10;
} while (y>0);

if(zbrojZNM>NajvZbroj)
{
NajvZbroj=zbrojZNM;
z=*(p+x);
}
}

printf("Broj s najvecim zbrojem znamenki: %d",z);
}