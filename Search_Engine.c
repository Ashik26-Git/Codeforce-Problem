#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int s,Flag=0;
        scanf("%d",&s);
        int a[s];
        for(int j=0;j<s;j++)
        {
            scanf("%d",&a[j]);
        }
        int n;
        scanf("%d",&n);
        for(int j=0;j<s;j++)
        {
            if(n==a[j])
            {
             Flag=1;
             printf("Case %d: %d\n",i,j+1);
             break;
            }
        }
        
        if(Flag==0)
        {
            printf("Case %d: Not Found\n",i);
        }

    }
    
    return 0;
}