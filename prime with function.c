#include<stdio.h>
int evenodd(int);
int main()
{
	int i,j;
	printf("enter your number:");
	scanf("%d",&i);
	j=evenodd(i);
	if(j==1)
	printf("\n %d is even",i);
	else
	printf("\n %d is odd",i);
}
int evenodd(int a)
{
	if(a%2==0)
	return 1;
	else
	return 0;
}
