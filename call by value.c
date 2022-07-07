#include<stdio.h>
void add(int n);
int main()
{
	int i=2;
	printf("\n the values before calling: %d ",i);
	add(i);
	printf("\n the values after calling :%d ",i);
	return 0;
}
void add(int n)
{
	n=n+10;
	printf("\n the value called function:%d",n);
	add(i);
}
