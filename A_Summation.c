#include <stdio.h>
#include <stdlib.h> // for abs() function

int main() {
    int n;
    scanf("%d", &n);
    
    long long int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    long long int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i]; // add the absolute value of the number to the sum
    }
    if(sum<0)
    {
        printf("%lld",abs(sum));
    }
    else 
    printf("%lld", sum);
    return 0;
}
