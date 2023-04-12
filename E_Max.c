#include<stdio.h>
int main()
{
    int n,x,max=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&x);
        for(int i=1;i<=n;i++)
         {
          if(max<x)
            {
                max=x;
            }
         }
    }
    printf("%d",max);
    
    return 0;
}