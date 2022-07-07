#include<stdio.h>
void sum( int*,int*,int*);
int main()
{
	int num1,num2,total;
	printf("\n your num1 is:");
	scanf("%d",&num1);
	printf("\n your num2 is:");
	scanf("%d",&num2);
	sum(&num1,&num2,&total);
	printf("\n total:%d",total);
}
void sum(int *a,int *b,int *t)
{
	*t=*a+ *b;
}
