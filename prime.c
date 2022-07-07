#include<stdio.h>
int main()
{
	int flag=0,i,num;
	printf("enter the number: \n");
	scanf("%d",&num);
	for(i=2;i<num/2;i++)
	{ if(num%2==0)
		{
		
		flag=1;
		break;
	    }
	}
	if(flag==1)
	printf("%d composite number",num);
	else
	printf("%d prime number",num);
}
