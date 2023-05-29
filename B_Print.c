#include <stdio.h>

void printNumbers(int n) 
{
    for (int i = 1; i < n; i++) {
        printf("%d ",i);
    }
   printf("%d",n);
}

int main() 
{
    int n;
    scanf("%d",&n);
    printNumbers(n);
    return 0;
}