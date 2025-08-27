#include<stdio.h>

int main(void) {
   int broj, min, max, i;
   printf("Unesi prvi realan broj\n");
   scanf("%d", &broj);
   min=broj;
   max=broj;
   printf("Unesite 9 realnih brojeva .\n");
for (i = 0; i < 9; i++) {
printf("%d. broj: ", i + 1); 
scanf("%d", &broj );
if(broj<=min)
min=broj;
if(broj>=max)
max=broj;
}
printf("Najmanji broj je %d, a najveći %d", min, max);

   
}