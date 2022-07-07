#include<stdio.h>
int main()
{
	int x=10;
	char ch='A';
	void *gp;
	gp=&x;
	printf("\n generic pointer with int=%d",*(int*)gp);
	gp=&ch;
	printf("\n generic pointer with char=%c",*(char*)gp);
	
}
