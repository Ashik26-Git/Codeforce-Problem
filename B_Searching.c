#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    int x;
    scanf("%d",&x);
    int ans=-1;
    for(i=0;i<n;i++)
    {
        if(array[i]==x)
        {
            ans=i;
            break;
        }
       
    }
    printf("%d",ans);
    return 0;
}