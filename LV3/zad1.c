#include<stdio.h>

int main(void) {
     int m, n;
   int i, j;
   int x, y;
   do{
       printf("Unesi broj redaka\n");
       scanf("%d", &m);
   } while(m<3 || m>=13);
   do{
       printf("Unesi broj stupaca\n");
       scanf("%d", &n);
   } while(n<2 || n>=15);
   float A[13][15], B[15];
   for(i=0; i<m; i++){
       for(j=0; j<n; j++){
           printf("Unesi broj za %d. redak i %d. stupac\n", i+1, j+1);
           scanf("%f", &A[i][j]);
       }
   }
   for(j=0; j<n; j++){
       B[j]=0;
   
       for(i=0; i<m; i++){
       B[j]+=A[i][j];
       
   }
   }
   for(i=0; i<n; i++){
       B[i]=B[i]/m;
   }
   for(i=0; i<n; i++)
   printf("%f\t", B[i]); 
   
   return 0;
}