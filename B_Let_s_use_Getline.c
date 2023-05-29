#include<stdio.h>
#include<string.h>
int main()
{
    char n[1000001];
    fgets(n,1000001,stdin);
    int i;
    for(i=0;n[i]!='\\';i++)
    {
        printf("%c",n[i]);
    }
    return 0;
}