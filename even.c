#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    float arr[n],sum=0,avg;
    for(i=0;i<n;i++)
    {
        scanf("%f",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum + arr[i];
    }
    avg=sum/n;
    printf("%.2f",avg);

    return 0;
}
