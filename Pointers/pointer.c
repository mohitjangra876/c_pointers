#include<stdio.h>
int main()

// Pointer

{
int a=25;
int *ptr;
ptr=&a;
printf(" The value of a is : %d \n",a);
printf(" The value of a is : %d \n",*ptr);
printf(" The value of a is : %d \n",*(&a));
printf(" The value of address of  a is : %u \n",ptr);


return 0;

}