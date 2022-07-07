#include<stdio.h>
void swap_call_val(int ,int);
void swap_call_ref(int*,int*);
int main()
{
	int a=1,b=2,c=3,d=4;
	printf("\n hi , a=%d and b=%d\n",a,b);
	swap_call_val(a,b);
	printf("\n hi , a=%d and b=%d\n",a,b);
	printf("\n hi , c=%d and d=%d\n",c,d);
	swap_call_val(c,b);
	printf("\n hi , c=%d and d=%d\n",c,d);
	return 0;
	
}
void swap_call_val(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("function(call by value)-a=%d and b=%d",a,b);
}
void swap_call_ref(int *c,int*d)
{
	int temp;
	temp=*c;
	*c=*d;
	*d=temp;
	printf("function(call by value)-c=%d and d=%d",c,d);
}
