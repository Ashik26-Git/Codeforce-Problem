#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arry[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arry[i]);
    }
    int min=arry[0],minInd=0;
    for (int i = 0; i < n; i++)
    {
        if (arry[i]<min)
        {
           min=arry[i];
           minInd=i;
        }
        
    }
    int max=arry[0],maxInd=0;
    for (int i = 0; i < n; i++)
    {
        if (arry[i]>max)
        {
           max=arry[i];
           maxInd=i;
        }
        
    }
    //printf("min is : %d\n min index : %d\n max is : %d\n max index : %d",min,minInd,max,maxInd);
    int temp;
        temp=arry[minInd];
        arry[minInd]=arry[maxInd];
        arry[maxInd]=temp;
    for (int i = 0; i < n; i++)
    {
         
        printf("%d ",arry[i]);
    }
    
    return 0;
}