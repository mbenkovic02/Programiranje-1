/* 6. Napisati funkciju koja generira i vraca cijeli broj iz [ ´ γ, δ] koji je neparan. U svrhu
testiranja u funkciji main() pozvati napisanu funkciju 128 puta s −2368 i 2998 kao
argumentima te svaki put na ekran ispisati povratnu vrijednost. */
    #include<stdio.h>
    #include<stdlib.h> 
    #include<time.h>
   
int neparanBroj(int x, int y);

int main()
{
int N;

srand((unsigned)time(NULL));

for(int i=1;i<=128;i++)
{
N=neparanBroj(-2368,2998);
printf("%d. neparan broj = %d\n",i,N);
}
}

int neparanBroj(int x, int y)
{
int N;
do
{
N=x + (double)rand() / RAND_MAX * (y-x);
}while(N%2==0);

return N;
}