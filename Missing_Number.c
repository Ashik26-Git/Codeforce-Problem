#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int s,a,b,c,d;
        scanf("%d%d%d%d",&s,&a,&b,&c);
        d=s-a-b-c;
        
        printf("%d\n",d);
   
    
    }
    return 0;
}