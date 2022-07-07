#include<stdio.h>
int main()
{
	int i,x,arr[20];
	printf("enter x value:");
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
		printf("\n arr[%d]=",i);
		scanf("%d",arr[i]);
	}
	printf("elements are:");
	for(i=0;i<x;i++)
	printf("\n %d",arr[i]);
	return 0;
	}
