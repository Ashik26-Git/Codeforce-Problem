#include<stdio.h>
int main()
{
    int n,i,x,even=0,odd=0,pos=0,neg=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
         if(x%2==0 )
            {
                even=even+1;
            }
        if(x%2!=0)
            {
                odd=odd+1; 
            }
        if(x>0)
            {
                pos=pos+1;  
            }
        if(x<0)
            {
                neg=neg+1;
            }    

    }
    printf("Even: %d\n",even);
    printf("Odd: %d\n",odd);
    printf("Positive: %d\n",pos);
    printf("Negative: %d\n",neg);
    

    return 0;
}