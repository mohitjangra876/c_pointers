#include<stdio.h>
int main()

{

int a=20,b;
int *ptra;
ptra=&a;
b=ptra;
int *ptrb;
ptrb=&b;
int **pptr;
pptr=ptrb;

printf("%d \n",a);
printf("%d \n",*ptra);
printf("%d \n",ptra);
printf("%d \n",b);
printf("%d \n",*ptrb);
printf("%d \n",ptrb);
printf("%d \n",pptr);
printf(" The value of  %d \n",*pptr);
printf(" The value of  %d \n",**pptr);




return 0;

}