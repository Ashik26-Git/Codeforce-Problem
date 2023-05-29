#include<stdio.h>
void sortNumber(int ar[3])
{
   int a=ar[0];
   int b=ar[1];
   int c=ar[2];
   for(int i=0;i<2;i++)
   {
    for(int j=i+1;j<3;j++)
    {
        if(ar[i]>ar[j])
        {
            int temp=ar[i];
            ar[i]=ar[j];
            ar[j]=temp;
        }
    }
   }
   for(int i=0;i<3;i++)
   {
    printf("%d\n",ar[i]);
   }
   printf("\n");
   printf("%d\n%d\n%d",a,b,c);
    
}

int main()
{
    int ar[3];
   for(int i=0;i<3;i++)
   {
    scanf("%d",&ar[i]);
   }
    sortNumber(ar);
    return 0;
}