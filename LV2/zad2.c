#include<stdio.h>



int main(void) {
   float Lab, UK, x, y, z, a;
  
   printf("Unesi ukupan broj bodova\n");
   do{
   scanf("%f", &UK);}
   while(UK<=-1, UK>=101);
   
   do{ 
   printf("Upišite broj bodova iz Lv:\n");
   scanf("%f", &Lab);}
   while(Lab<=-1, Lab>=29);
   x=Lab/28;
   y=x*20;
   z=UK-y;
   a=100-(z/UK)*100;
   
   printf("Udio LV u ukupnoj ocjeni je %f", a);
   
  
  
   
}