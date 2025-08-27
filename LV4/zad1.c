/* 3. Omoguciti korisniku unos jednog stringa od maksimalno 120 znakova. Odrediti i ´
na ekran ispisati koliki postotak znakova cine mala, a koliki velika slova. */
#include<stdio.h>
#include<string.h>

int main(void) {
    float y, mala=0, velika=0;
    char str[121];
    int z;
    
    printf("Upišite string od maksimalno 120 znakova:\n");
    fgets(str, 121, stdin);
    
    z=strlen(str)-1;
    for(int x=0; x<z; x++)
    {
        if(str[x]>='a' && str[x]<='z')
        mala++;
        if(str[x]>='A' && str[x]<='Z')
        velika++;
    }
    y=100.0/z;
    float brmalih=y*mala;
    float brvelikih=y*velika;
    
    printf("Postotak malih je %.2f a postotak velikih je %.2f", brmalih, brvelikih);
}