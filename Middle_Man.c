#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
        if(a[i]>a[j])
        {
            int temp;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        }
    }
   if(n%2==0)
   {
    int m1=n/2;
    int m2=(n/2)+1;
   printf("%d %d",a[m1-1],a[m2-1]);
   }
   else
   {
    int m=(n+1)/2;
    printf("%d",a[(m-1)]);
   } 
    return 0;
}