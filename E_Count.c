#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000000];
    scanf("%s",a);
    //fgets(s,1000000,stdin);
    int sum=0;
    for(int i=0;i<strlen(a);i++)
    {
        sum=sum+(a[i]-'0');
    }
    printf("%d",sum);
    return 0;
}