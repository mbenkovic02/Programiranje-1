/* Omoguciti korisniku unos 4 ´ ≤ m < 19 vrijednosti u polje cijelih brojeva. Odrediti i
na ekran ispisati razliku elementa s najvecom i elementa s najmanjom vrijednosti. ´
Koristiti pokazivacku notaciju za pristup elementima polja.  */
#include<stdio.h>
int main()
{
int m,x,najv,najm;
int *p;

printf("Upisite broj elemenata u polju(4 <= m < 19): ");
do
{
scanf("%d",&m);
}while(m<4 || m>=19);

int polje[m];
p=polje;

for(x=0;x<m;x++) 
{
printf("Upisite %d. element polja: ",x+1);
scanf("%d",p + x);
}

najv=*(p+0);
najm=*(p+0);

for(x=1;x<m;x++) 
{
if(*(p+x)>najv)
najv=*(p+x);

if(*(p+x)<najm)
najm=*(p+x);
}

printf("Razlika najveceg i najmanjeg elementa: %d",najv-najm);

}
