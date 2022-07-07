#include<stdio.h>
int main()
{
	int num,*pnum;
	pnum=&num;
	printf("\n enter the number is:");
	scanf("%d",&num);
	printf("\n your number is:%d",*pnum);
	return 0;
	
	
}
