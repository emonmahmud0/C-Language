#include<stdio.h>
int main()
{
    int i,arr[5];
    scanf("%d",&arr[5]);
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=5-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(i=0;i<6;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=6-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}
