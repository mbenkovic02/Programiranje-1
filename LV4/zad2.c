/* 9. Omoguciti korisniku unos jednog stringa od maksimalno 80 znakova. Potom, ´
dodatno mu omoguciti unos jednog znaka. Zamijeniti tim znakom sve znakove ´
u stringu cija je ASCII vrijednost manja od aritmeti ˇ cke sredine svih znakova. Na ˇ
kraju, na ekran ispisati izmijenjeni string. */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void) {
    char str[81], A;
    float arit;
    int l, x, y, z, br=0;
    printf("Unesi string od max 80 znakova:\n");
    fgets(str, 80, stdin);
    printf("Unesi jedan znak:\n");
    scanf("%c", &A);
    l=strlen(str)-1;
    for(x=0; x<=l; x++)
    {
    y=str[x];
    br++;
    arit+=y;
    }
    arit=arit/br;
    printf("%f, %d", arit, y);
    for(x=0; x<=l; x++)
    {
    y=str[x];
    if(y<arit)
    {
  str[x]=A;
  printf("%s", str);
    }
    }

   
    
    
    
    
}