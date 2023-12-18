#include<stdio.h>

void reverse(struct node **start){
    struct node*p,*q,*r=NULL;
    p=*start;
    while(p!=NULL)
{
    q=p->next;
    p->next=r;
    r=p;
    p=q;
}
*start=r;
}

int main()
{



return 0;

}