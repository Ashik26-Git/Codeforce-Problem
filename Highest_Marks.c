#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0],index;
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            index=i;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",max-a[i]);
    }
   
    return 0;
}