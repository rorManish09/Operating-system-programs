#include<stdio.h>
#include<stdlib.h>

int main()
{
    int RQ[100],i,n,TotalHeadmoment=0,initial,count=0;
    printf("Enter the number of Request \n");
    scanf("%d",&n);
    printf("Enter the request sequence \n");
    for(i=0;i<n;i++)
    scanf("%d",&RQ[i]);
    printf("Enter initial head position \n");
    scanf("%d",&initial);
    while(count!=n)
    {
        int min= 1000,d,index;
        for(i=0;i<n;i++)
        {
            d= abs(RQ[i]-initial);
            if(min>d)
            {
                min=d;
                index=i;

            }
        }
        TotalHeadmoment+=min;
        initial=RQ[index];
        RQ[index]=1000;
        count++;
    }
    printf("Total Head Momvement is %d",TotalHeadmoment);
    return 0;
}