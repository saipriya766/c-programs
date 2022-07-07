#include<stdio.h>
int main()
{
	int num1=2,num2=3,sum=0,mul=1;
	int *pnum1,*pnum2;
	num1=&pnum1;
	num2=&pnum2;
	sum=*pnum1+*pnum2;
	mul=sum*(*pnum1);
	printf("sum is:",sum);
	printf("mul is:",mul);
}
