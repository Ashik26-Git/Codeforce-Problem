#include<stdio.h>
int sum(int x, int y)
{
    int sum;
    sum=x+y;
    printf("%d",sum);
    return sum;

}
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    sum(x,y);
    

    return 0;
}