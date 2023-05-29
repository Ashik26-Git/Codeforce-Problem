#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,pos,min;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    min=array[0];
    pos=1;
    for(i=1;i<n;i++)
    {
        if(array[i]<min)
    {
        min=array[i];
        pos=i+1;
        
    }
    }
    printf("%d %d",min,pos);
    
    return 0;
}