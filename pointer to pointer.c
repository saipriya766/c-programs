#include<stdio.h>
int main()
{

    int x;
int *px, **ppx;
printf("enter your value:");
scanf("%d",&x);
px = &x;
ppx = &px;
printf("\n %d", **ppx);
}
