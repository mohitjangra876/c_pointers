#include<stdio.h>
int main()

// Pointer t0 Pointeri


{

int a=20;
int b;
int *ptra;
int *ptrb;
ptra=&a;
ptrb=&b;
*ptrb=ptra;
int **pptrb=ptrb;


printf("%d \n",a);
printf("%u \n",ptra);
printf("%u \n",ptrb);
printf("%d \n",*ptra);
printf("%d \n",*ptrb);
printf("%d \n",**pptrb);


return 0;

}