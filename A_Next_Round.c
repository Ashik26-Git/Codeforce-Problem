#include<stdio.h>
int main()
{
    int arr[100],i,n,k,sum=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]); 
    }
    for(i=0;i<n;i++){
    if(arr[i]>=arr[k-1] && arr[i]!=0)
        {
            sum=sum+1;
        }
    }
    printf("%d",sum);
}