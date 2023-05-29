#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a>0 && a<=100) && (b>0 && b<=100) && (c>0 && c<=100))
    {
        if(a==b && a==c && b==c) 
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }
    else
    {
        printf("No");
    }
    return 0;
}