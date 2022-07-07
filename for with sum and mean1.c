#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,arr[20],sum=0;
	float mean=0.0;
	printf("\n enter your elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n arr[%d]:",i);
		scanf("%d",&arr[i]);

	}
	for(i=0;i<n;i++)

		sum +=arr[i];
		mean=(float)sum/n;
		printf("\n sum is: %d",sum);
		printf("\n mean is: %.2f",mean);
		return 0;

}
