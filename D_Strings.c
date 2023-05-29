#include<stdio.h>
#include<string.h>
int main()
{
    char a[11],b[11];
    scanf("%s%s",a,b);
    int len1,len2;
    len1=strlen(a);
    len2=strlen(b);
    //The comment out code called concatenation
    /*int k=strlen(a);
    for(int i=0;i<=strlen(b);i++)
    {
        a[k]=b[i];
        k++;
    }
    printf("%d %d\n%s\n",len1,len2,a);*/
    printf("%d %d\n%s%s\n",len1,len2,a,b);
    int temp;
    temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    printf("%s %s",a,b);
    return 0;
}