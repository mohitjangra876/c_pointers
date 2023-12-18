#include<stdio.h>
int main()

{

    int a=20,b;
    int *ptra,*ptrb,**pptr;
    ptra=&a;
      ptrb=ptra;
      pptr=&ptrb;

    printf("%d \n ",a);
    printf("%d \n ",*ptra);
    printf("%d \n ",*(&a));
    printf("%d \n ",ptrb);
    printf("%d \n ",*ptrb);
    printf("%d \n ",**pptr);

return 0;

}