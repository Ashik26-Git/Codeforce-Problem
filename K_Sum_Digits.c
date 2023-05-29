#include<stdio.h>
#include<string.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    char a[n];
    scanf("%s",a);
    for(int i=0;i<n;i++)
    {
        sum=sum+(a[i]-'0');
    }
    printf("%d",sum);
    return 0;
}