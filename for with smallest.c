#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,arr[20],small,pos;
    printf("\n enter your  array size values:");
    scanf("%d",&n);
    printf("\n enter your values:");
    for(i=0;i<n;i++)
    {

        printf("\n arr[%d] is:",i);
        scanf("%d",&arr[i]);
        small=arr[0];
        pos=0;
    }
    for(i=1;i<n;i++)
    {
       if(arr[i]<small)
       {

           small=arr[i];
            pos=i;
       }
            printf("\n sum is:%d",small);
            printf("\n small pos:%d",pos);
            return 0;


    }
}
